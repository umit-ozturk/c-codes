/*
 * ==========================================================================
 *                     Filename:     5.c
 *                     Description:  Dizi Elemanlarýnýn Konsola Yazdýrýlmasý
 *                     Created:      10.03.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */




#include<stdio.h>


int main(){
	
	int d1[]={1,2,3,4};
	
	int d2[3];
	d2[0]=5;
	d2[1]=6;
	d2[2]=7;
	
	int i;
	int a=sizeof(d1)/sizeof(int);
		for (i=0;i<4;i++){
			printf("Birinci dizinin %d indisli elemani: %d \n",i,d1[i]);
			
	}
	printf("\n");
	
	int b=sizeof(d2)/sizeof(int);
		for (i=0;i<3;i++){
			printf("Ikinci dizinin %d indisli elemani: %d \n",i,d2[i]);
		
		}
	
	return 0;
}
