/*
 * ==========================================================================
 *                     Filename:     016.c
 *                     Description:  Memory Allocate (malloc) Deneme
 *                     Created:      26.06.2016
 *
 *         Author:  �mit �zt�rk
 *
 * ==========================================================================
 */



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


main(){
	
	// Bellekte bir iki integerlik yer a�t�m a pointerini a�t���m ilk integer�n 
	// yerine atad�m.
	int *a= (int *)malloc((2*sizeof(int)));
	*a=10; // pointerin g�sterdi�i de�eri 10 
	
	printf("Adres %d \n Deger %d\n\n",a,*a); // adresi ve adresin i�indeki de�eri bast�m
	a++;
	*a=9; // a y� artt�rd�m ikinci integere gitti
	
	printf("Adres %d \n Deger %d",a,*a); // adresi ve adresin i�indeki de�eri bast�m.
		
	getch();
}
