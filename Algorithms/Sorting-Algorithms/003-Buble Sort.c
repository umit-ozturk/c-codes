/*
 * ==========================================================================
 *                     Filename:     003-Bubble Sort.c
 *                     Description:  Bubble Sort-Kabarc�k S�ralamas�
 *                     Created:      23.06.2016
 *
 *		        Author:  �mit �zt�rk
 *
 *	    				Karma��kl�k (Complicacy): Best    // n
 *												  Avarage // n^2
 *												  Worst   // n^2
 *
 *						Approach: Yer De�i�tirme
 *
 *						Note:http:http://bilgisayarkavramlari.sadievrenseker.com/2008/08/09/kabarcik-siralamasi-baloncuk-siralamasi-bubble-sort/
 *					    Bu d�k�mandanda faydalan�labilir �adi Evren �eker'e Te�ekk�rler.		
 *
 * ==========================================================================
 */




#include<stdio.h>
#include<conio.h>

void bubblesort(int a[],int n){ // a dizi / n =le dizinin uzunlu�u
	int i,j,x;
	
	for(i=1;i < n;i++){			  //i =1 den ba�lar algoritma gere�i
		int sirali=1;
			for(j=0;j < n-i;j++){ 	//�lk iki say� al�r birbiriyle kar��la�t�r�r �art sa�lan�rsa yer de�i�tirir.
				if(a[j]>a[j+1]){	//K����� unutur bir say� alarak dizinin sonuna kadar gider
				sirali=0;
				x=a[j];			//Klasik Swap algoritmas�
				a[j]=a[j+1];
				a[j+1]=x;
				}
			}
		if(sirali) break; // s�ral�ysa d�ng�den ��kar best case n olur
	}
}
	
	


main(){
	
	int a[20],le,i;

/*-----------------------------------------------------------------------------------*/	
	printf("How many numbers you entered: ");scanf("%d",&le);
	for(i=0;i<le;i++){ // Arrayi al�yoruz.
		printf("Enter %d number",i+1);
		scanf("%d",&a[i]);
	}
	
	bubblesort(a,le); // diziyi ve uzunlugu fonksiyona g�nderiyoruz.
	
/*-----------------------------------------------------------------------------------*/	
	printf("\nAfter sorting: ");
	
		for(i=0;i<le;i++) printf(" %d ",a[i]); // S�ralanm�� arrayi yazd�r�yoruz.
	
	
	getch();
}
