/*
 * ==========================================================================
 *                     Filename:     002-Insertion Sort.c
 *                     Description:  Insertion Sort - Sokma,Ekleme Sıralaması
 *                     Created:      20.06.2016
 *
 *         Author:  Ümit Öztürk
 *
 *                      Karmaşıklık (Complicacy): Best    // n
 *						  Avarage // n^2
 *						  Worst   // n^2
 *         				
 *						Approach:Insertion
 *
 * 						Note:http://www.bilgisayarkavramlari.com/2008/08/09/hizli-siralama-algoritmasi-quick-sort-algorithm/
 *					    Bu dökümandanda faydalanılabilir Şadi Evren Şeker'e Teşekkürler.		
 * ==========================================================================
 */



#include<stdio.h>
#include<conio.h>



void insertionsort(int a[],int n){

	int x,var,i; // x:swiping için kullanılan değişken  var:kullanılan değişken i:döngü değişkeni
	
	for(i=1; i <= n-1 ; i++){ // i=1 olduğunu hatırlayınız
		var=i;
			while (var > 0 && a[var] < a[var-1]){
				/* Bu kod parçacığını artık aklımızda tutmalıyız klasik swiping işlemi */
							// Türkçesi yer değiştirme algoritması
				x=a[var];
				a[var]=a[var-1];
				a[var-1]=x;
				 	var--; /* Değişleni azaltıyoruz mesela 6,4,3,5 arrayi elimizde olsun
					 			2. indexteki 3 değerine gelince sadece 1. index ile kontrol edip
								swiping yapmasın değeri 0. index ile de kontrol edip swiping yapsın diye   */
			}
	}

}

main(){
	
	int a[20],i,n;		// a: dizi n: alınacak sayı i:döngü değişkeni
	
	printf("How many numbers you entered.\n");scanf("%d",&n);
	
		for(i=0;i<n;i++){ /* Arrayi belleğe aldık */
			printf("Enter %d number: ",i+1);
			scanf("%d",&a[i]);
			printf("\n");
		}
	//Fonksiyona diziyi ve uzunluk bilgisini gönderiyoruz.
	insertionsort(a,n); // 0 değil 1 mesela 5,1,2,6,8 gibi bir dizide
							// 5 | 1,2,6,8 gibi olacaktır yani 5 zaten sıralanmış
							// sayılacaktır bu yüzden 0. indexten başlamaz.
/*-----------------------------------------------------------------------------------*/	
	printf("\nAfter sorting: ");
	
		for(i=0;i<n;i++) printf(" %d ",a[i]); // Sıralanmış arrayi yazdırıyoruz.
	
	
	getch();
}
