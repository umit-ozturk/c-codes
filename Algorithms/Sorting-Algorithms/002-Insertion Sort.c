/*
 * ==========================================================================
 *                     Filename:     002-Insertion Sort.c
 *                     Description:  Insertion Sort - Sokma,Ekleme S�ralamas�
 *                     Created:      20.06.2016
 *
 *         Author:  �mit �zt�rk
 *
 *                      Karma��kl�k (Complicacy): Best    // n
 *												  Avarage // n^2
 *												  Worst   // n^2
 *         				
 *						Approach:Insertion
 *
 * 						Note:http://www.bilgisayarkavramlari.com/2008/08/09/hizli-siralama-algoritmasi-quick-sort-algorithm/
 *					    Bu d�k�mandanda faydalan�labilir �adi Evren �eker'e Te�ekk�rler.		
 * ==========================================================================
 */



#include<stdio.h>
#include<conio.h>


void insertionsort(int a[],int n){

	int x,var,i; // x:swiping i�in kullan�lan de�i�ken  var:kullan�lan de�i�ken i:d�ng� de�i�keni
	
	for(i=1; i <= n-1 ; i++){ // i=1 oldu�unu hat�rlay�n�z
		var=i;
			while (var > 0 && a[var] < a[var-1]){
				/* Bu kod par�ac���n� art�k akl�m�zda tutmal�y�z klasik swiping i�lemi */
							// T�rk�esi yer de�i�tirme algoritmas�
				x=a[var];
				a[var]=a[var-1];
				a[var-1]=x;
				 	var--; /* De�i�leni azalt�yoruz mesela 6,4,3,5 arrayi elimizde olsun
					 			2. indexteki 3 de�erine gelince sadece 1. index ile kontrol edip
								swiping yapmas�n de�eri 0. index ile de kontrol edip swiping yaps�n diye   */
			}
	}

}

main(){
	
	int a[20],i,n;		// a: dizi n: al�nacak say� i:d�ng� de�i�keni
	
	printf("How many numbers you entered.\n");scanf("%d",&n);
	
		for(i=0;i<n;i++){ /* Arrayi belle�e ald�k */
			printf("Enter %d number: ",i+1);
			scanf("%d",&a[i]);
			printf("\n");
		}
	//Fonksiyona diziyi ve uzunluk bilgisini g�nderiyoruz.
	insertionsort(a,n); // 0 de�il 1 mesela 5,1,2,6,8 gibi bir dizide
							// 5 | 1,2,6,8 gibi olacakt�r yani 5 zaten s�ralanm��
							// say�lacakt�r bu y�zden 0. indexten ba�lamaz.
/*-----------------------------------------------------------------------------------*/	
	printf("\nAfter sorting: ");
	
		for(i=0;i<n;i++) printf(" %d ",a[i]); // S�ralanm�� arrayi yazd�r�yoruz.
	
	
	getch();
}
