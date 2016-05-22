/*
 * ==========================================================================
 *                     Filename:     015.c
 *                     Description:  Final için çalýþma
 *                     Created:      22.05.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */



#include<stdio.h>
#include<conio.h>

int maxf(int a[5]){
 	int maxs,i;
 
 	maxs=a[0];//  Dizinin 0ýncý indeksindeki elemaný maxs sayýsýna atadým
 		for(i=0;i<5;i++){//  a dizisinin indexlerindeki herhangi bir eleman eski maxs sayýsýndan büyük !! ise onu maxs sayýsýna atadým
 			if (maxs<a[i])maxs=a[i];// Yeni maximum deðer böylelikle maxs sayýsýnda tutulmuþ oldu
			 }	
			 
	return maxs;// maxs sayýsýný dýþarýya return ettim
}

int minf(int a[5]){ //  Minimum deðeri hesaplayan fonksiyon
 	int mins,i;
 
 	mins=a[0];//  Dizinin 0ýncý indeksindeki elemaný mins sayýsýna atadým
 		for(i=0;i<5;i++){//  a dizisinin indexlerindeki herhangi bir eleman eski mins sayýsýndan küçük !! ise onu mins sayýsýna atadým
 			if (mins>a[i])mins=a[i];// Yeni minimum deðer böylelikle mins sayýsýnda tutulmuþ oldu
			 }	
			 
	return mins;// mins sayýsýný dýþarýya return ettim
}


 main() {
 	
 	char sec;
 	int i,min,max;
 	int a[5];
 	
 	for (i=0;i<5;i++){
 		printf("%dnci degeri giriniz",i+1);scanf("%d",&a[i]);
	 }
	 printf("secim yapin a veya A = max sayi b veya B = min sayi\n");
 	sec=getch();
 	
 	switch(sec){
 		case 'a': {
 		
 		max=maxf(a); // dizi yi fonksiyona gönder 
 		
		 printf("Dizideki max eleman = %d",max);
			break;
		 }
 		case 'A': {
 		
 		max=maxf(a); // dizi yi fonksiyona gönder 
 		
		 printf("Dizideki max eleman = %d",max);
			break;
		 }	
 		case 'b': {
 		
 		min=minf(a); // dizi yi fonksiyona gönder 
 		
		 printf("Dizideki min eleman = %d",min);
			break;
		 }	 
 		case 'B': {
 		
 		min=minf(a); // dizi yi fonksiyona gönder 
 		
		 printf("Dizideki min eleman = %d",min);
			break;
		 }	 
 		default : printf("Yanlis secim");	
	 }
 	getch();
}
