/*
 * ==========================================================================
 *                     Filename:     003-Bubble Sort.c
 *                     Description:  Bubble Sort-Kabarcýk Sýralamasý
 *                     Created:      23.06.2016
 *
 *		        Author:  Ümit Öztürk
 *
 *	    				Karmaþýklýk (Complicacy): Best    // n
 *												  Avarage // n^2
 *												  Worst   // n^2
 *
 *						Approach: Yer Deðiþtirme
 *
 *						Note:http:http://bilgisayarkavramlari.sadievrenseker.com/2008/08/09/kabarcik-siralamasi-baloncuk-siralamasi-bubble-sort/
 *					    Bu dökümandanda faydalanýlabilir Þadi Evren Þeker'e Teþekkürler.		
 *
 * ==========================================================================
 */




#include<stdio.h>
#include<conio.h>

void bubblesort(int a[],int n){ // a dizi / n =le dizinin uzunluðu
	int i,j,x;
	
	for(i=1;i < n;i++){			  //i =1 den baþlar algoritma gereði
		int sirali=1;
			for(j=0;j < n-i;j++){ 	//Ýlk iki sayý alýr birbiriyle karþýlaþtýrýr þart saðlanýrsa yer deðiþtirir.
				if(a[j]>a[j+1]){	//Küçüðü unutur bir sayý alarak dizinin sonuna kadar gider
				sirali=0;
				x=a[j];			//Klasik Swap algoritmasý
				a[j]=a[j+1];
				a[j+1]=x;
				}
			}
		if(sirali) break; // sýralýysa döngüden çýkar best case n olur
	}
}
	
	


main(){
	
	int a[20],le,i;

/*-----------------------------------------------------------------------------------*/	
	printf("How many numbers you entered: ");scanf("%d",&le);
	for(i=0;i<le;i++){ // Arrayi alýyoruz.
		printf("Enter %d number",i+1);
		scanf("%d",&a[i]);
	}
	
	bubblesort(a,le); // diziyi ve uzunlugu fonksiyona gönderiyoruz.
	
/*-----------------------------------------------------------------------------------*/	
	printf("\nAfter sorting: ");
	
		for(i=0;i<le;i++) printf(" %d ",a[i]); // Sýralanmýþ arrayi yazdýrýyoruz.
	
	
	getch();
}
