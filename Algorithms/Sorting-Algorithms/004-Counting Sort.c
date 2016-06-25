/*
 * ==========================================================================
 *                     Filename: 004-Counting Sort.c    
 *                     Description:  Counting Sort - Sayarak S�ralama
 *                     Created:      25.06.2016
 *
 *         Author:  �mit �zt�rk
 *
 *
 *						Karma��kl�k (Complicacy):  n
 *
 *				//Bu algoritman�n �zelli�i Divide and Conquer gibi yada Yer De�i�tirme algoritmalardaki
 *			//Yakla��mlara benzememesi say�lar� tek tek sayarak ba�ka bir haf�zaya almas� ve yerle�tirmesi �eklindedir.
 *
 *							Approach: Counting
 *
 * 			Note:http://bilgisayarkavramlari.sadievrenseker.com/2008/08/09/sayarak-siralama-counting-sort/
 *			    Bu d�k�mandanda faydalan�labilir �adi Evren �eker'e Te�ekk�rler.
 * ==========================================================================
 */
	// Kolay olmas�na kar�� ilk defa kar��la�anlar i�in farkl� bir yakla��m i�erisinde oldu�u i�in
//Hemen alg�lanamaya bilir.

#include<stdio.h>
#include<conio.h>

void countingsort (int a[20],int le,int max){ // Counting Sort Fonksiyonu
	
	int b[20]={0},i,j;						// Ba�lang��tan farkl� di�er arrayimiz indekleri 0
	
	for(i=0;i<le;i++)	b[a[i]]=b[a[i]]+1;	//Mesela 3 ten 2 tane 4 ten 3 tane varsa sa b[] 
											// b[2,3] olur yani 3 ten 2 4 ten 3 tane var �eklinde haf�zaya al�r.
	printf("\nAfter sorting: ");
	
	for(i=0;i<=max;i++){		//i max say�ya kadar gider tek tek yani en b�y�k say� 30 ise 30 a kadar tek tek
		for(j=1;j<=b[i];j++)	// sayar j ise ayn� de�erden ka�tane varsa o kadar indeksi ekrana basar
			printf(" %d ",i);
	}
	
	
	
}


main(){
	
	int a[20],le,i,max=0;

/*-----------------------------------------------------------------------------------*/	
	printf("How many numbers you entered: ");scanf("%d",&le);
	for(i=0;i<le;i++){ // Arrayi al�yoruz.
		printf("Enter %d number",i+1);
		scanf("%d",&a[i]);
			if (a[i] > max) max=a[i]; // a n�n indexlerinde ilerlerken b�y�k bir de�er g�rd���m�z anda
	}								//onu maxa at�yoruz b�ylelikle en b�y�k de�er max oluuyor.
	
	countingsort(a,le,max); // diziyi ve uzunlugu fonksiyona g�nderiyoruz.
	

	
	getch();
}
