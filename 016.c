/*
 * ==========================================================================
 *                     Filename:     016.c
 *                     Description:  Memory Allocate (malloc) Deneme
 *                     Created:      26.06.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


main(){
	
	// Bellekte bir iki integerlik yer açtým a pointerini açtýðým ilk integerýn 
	// yerine atadým.
	int *a= (int *)malloc((2*sizeof(int)));
	*a=10; // pointerin gösterdiði deðeri 10 
	
	printf("Adres %d \n Deger %d\n\n",a,*a); // adresi ve adresin içindeki deðeri bastým
	a++;
	*a=9; // a yý arttýrdým ikinci integere gitti
	
	printf("Adres %d \n Deger %d",a,*a); // adresi ve adresin içindeki deðeri bastým.
		
	getch();
}
