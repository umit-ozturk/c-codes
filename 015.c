/*
 * ==========================================================================
 *                     Filename:     015.c
 *                     Description:  Final i�in �al��ma
 *                     Created:      22.05.2016
 *
 *         Author:  �mit �zt�rk
 *
 * ==========================================================================
 */



#include<stdio.h>
#include<conio.h>

int maxf(int a[5]){
 	int maxs,i;
 
 	maxs=a[0];//  Dizinin 0�nc� indeksindeki eleman� maxs say�s�na atad�m
 		for(i=0;i<5;i++){//  a dizisinin indexlerindeki herhangi bir eleman eski maxs say�s�ndan b�y�k !! ise onu maxs say�s�na atad�m
 			if (maxs<a[i])maxs=a[i];// Yeni maximum de�er b�ylelikle maxs say�s�nda tutulmu� oldu
			 }	
			 
	return maxs;// maxs say�s�n� d��ar�ya return ettim
}

int minf(int a[5]){ //  Minimum de�eri hesaplayan fonksiyon
 	int mins,i;
 
 	mins=a[0];//  Dizinin 0�nc� indeksindeki eleman� mins say�s�na atad�m
 		for(i=0;i<5;i++){//  a dizisinin indexlerindeki herhangi bir eleman eski mins say�s�ndan k���k !! ise onu mins say�s�na atad�m
 			if (mins>a[i])mins=a[i];// Yeni minimum de�er b�ylelikle mins say�s�nda tutulmu� oldu
			 }	
			 
	return mins;// mins say�s�n� d��ar�ya return ettim
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
 		
 		max=maxf(a); // dizi yi fonksiyona g�nder 
 		
		 printf("Dizideki max eleman = %d",max);
			break;
		 }
 		case 'A': {
 		
 		max=maxf(a); // dizi yi fonksiyona g�nder 
 		
		 printf("Dizideki max eleman = %d",max);
			break;
		 }	
 		case 'b': {
 		
 		min=minf(a); // dizi yi fonksiyona g�nder 
 		
		 printf("Dizideki min eleman = %d",min);
			break;
		 }	 
 		case 'B': {
 		
 		min=minf(a); // dizi yi fonksiyona g�nder 
 		
		 printf("Dizideki min eleman = %d",min);
			break;
		 }	 
 		default : printf("Yanlis secim");	
	 }
 	getch();
}
