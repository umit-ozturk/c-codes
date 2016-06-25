/*
 * ==========================================================================
 *                     Filename: 004-Counting Sort.c    
 *                     Description:  Counting Sort - Sayarak Sýralama
 *                     Created:      25.06.2016
 *
 *         Author:  Ümit Öztürk
 *
 *
 *						Karmaþýklýk (Complicacy):  n
 *
 *				//Bu algoritmanýn özelliði Divide and Conquer gibi yada Yer Deðiþtirme algoritmalardaki
 *			//Yaklaþýmlara benzememesi sayýlarý tek tek sayarak baþka bir hafýzaya almasý ve yerleþtirmesi þeklindedir.
 *
 *							Approach: Counting
 *
 * 			Note:http://bilgisayarkavramlari.sadievrenseker.com/2008/08/09/sayarak-siralama-counting-sort/
 *			    Bu dökümandanda faydalanýlabilir Þadi Evren Þeker'e Teþekkürler.
 * ==========================================================================
 */
	// Kolay olmasýna karþý ilk defa karþýlaþanlar için farklý bir yaklaþým içerisinde olduðu için
//Hemen algýlanamaya bilir.

#include<stdio.h>
#include<conio.h>

void countingsort (int a[20],int le,int max){ // Counting Sort Fonksiyonu
	
	int b[20]={0},i,j;						// Baþlangýçtan farklý diðer arrayimiz indekleri 0
	
	for(i=0;i<le;i++)	b[a[i]]=b[a[i]]+1;	//Mesela 3 ten 2 tane 4 ten 3 tane varsa sa b[] 
											// b[2,3] olur yani 3 ten 2 4 ten 3 tane var þeklinde hafýzaya alýr.
	printf("\nAfter sorting: ");
	
	for(i=0;i<=max;i++){		//i max sayýya kadar gider tek tek yani en büyük sayý 30 ise 30 a kadar tek tek
		for(j=1;j<=b[i];j++)	// sayar j ise ayný deðerden kaçtane varsa o kadar indeksi ekrana basar
			printf(" %d ",i);
	}
	
	
	
}


main(){
	
	int a[20],le,i,max=0;

/*-----------------------------------------------------------------------------------*/	
	printf("How many numbers you entered: ");scanf("%d",&le);
	for(i=0;i<le;i++){ // Arrayi alýyoruz.
		printf("Enter %d number",i+1);
		scanf("%d",&a[i]);
			if (a[i] > max) max=a[i]; // a nýn indexlerinde ilerlerken büyük bir deðer gördüðümüz anda
	}								//onu maxa atýyoruz böylelikle en büyük deðer max oluuyor.
	
	countingsort(a,le,max); // diziyi ve uzunlugu fonksiyona gönderiyoruz.
	

	
	getch();
}
