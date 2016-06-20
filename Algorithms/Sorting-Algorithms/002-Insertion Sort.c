/*
 * ==========================================================================
 *                     Filename:     002-Insertion Sort.c
 *                     Description:  Insertion Sort - Sokma,Ekleme Sýralamasý
 *                     Created:      20.06.2016
 *
 *         Author:  Ümit Öztürk
 *
 *                      Karmaþýklýk (Complicacy): Best    // n
 *												  Avarage // n^2
 *												  Worst   // n^2
 *         				
 *						Approach:Insertion
 *
 * 						Note:http://www.bilgisayarkavramlari.com/2008/08/09/hizli-siralama-algoritmasi-quick-sort-algorithm/
 *					    Bu dökümandanda faydalanýlabilir Þadi Evren Þeker'e Teþekkürler.		
 * ==========================================================================
 */



#include<stdio.h>
#include<conio.h>


void insertionsort(int a[],int n){

	int x,var,i; // x:swiping için kullanýlan deðiþken  var:kullanýlan deðiþken i:döngü deðiþkeni
	
	for(i=1; i <= n-1 ; i++){ // i=1 olduðunu hatýrlayýnýz
		var=i;
			while (var > 0 && a[var] < a[var-1]){
				/* Bu kod parçacýðýný artýk aklýmýzda tutmalýyýz klasik swiping iþlemi */
							// Türkçesi yer deðiþtirme algoritmasý
				x=a[var];
				a[var]=a[var-1];
				a[var-1]=x;
				 	var--; /* Deðiþleni azaltýyoruz mesela 6,4,3,5 arrayi elimizde olsun
					 			2. indexteki 3 deðerine gelince sadece 1. index ile kontrol edip
								swiping yapmasýn deðeri 0. index ile de kontrol edip swiping yapsýn diye   */
			}
	}

}

main(){
	
	int a[20],i,n;		// a: dizi n: alýnacak sayý i:döngü deðiþkeni
	
	printf("How many numbers you entered.\n");scanf("%d",&n);
	
		for(i=0;i<n;i++){ /* Arrayi belleðe aldýk */
			printf("Enter %d number: ",i+1);
			scanf("%d",&a[i]);
			printf("\n");
		}
	//Fonksiyona diziyi ve uzunluk bilgisini gönderiyoruz.
	insertionsort(a,n); // 0 deðil 1 mesela 5,1,2,6,8 gibi bir dizide
							// 5 | 1,2,6,8 gibi olacaktýr yani 5 zaten sýralanmýþ
							// sayýlacaktýr bu yüzden 0. indexten baþlamaz.
/*-----------------------------------------------------------------------------------*/	
	printf("\nAfter sorting: ");
	
		for(i=0;i<n;i++) printf(" %d ",a[i]); // Sýralanmýþ arrayi yazdýrýyoruz.
	
	
	getch();
}
