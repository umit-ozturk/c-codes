/*
 * ==========================================================================
 *                     Filename:     9.c
 *                     Description:  Printing To Array Examples
 *                     Created:      14.03.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */



#include<stdio.h>


int main(){
	
	
	int i=0,k=0,l=0,top=0;
	float ort=0;
	int dizi[5];
	/**************************** Verinin Alinmasi ****************************/
	for(i=0;i<5;i++){
		printf("%d inci indisi giriniz:",i+1);
		scanf("%d",&dizi[i]);
	}
	
	/******************************* Yazdirilmasi *****************************/
	l=sizeof(dizi)/sizeof(int);
		
	for (i=0;i<l;i++){
		top=top+dizi[i];
	}
	ort=top/l;
	printf("Dizinin indislerinin toplami: %d\n Ortamalamasi %.1f dir.\n\n",top,ort);
	
	/******************************* Yazdirilmasi *****************************/
	
	for(i=0;i<l;i++){
		printf("Dizinin %d inci indisi %d dir\n",i+1,dizi[i]);
		
	}
	/*************************Tersten  Yazdirilmasi ***************************/
	printf("\n");
	for(i=l-1;i>=0;i--){
		printf("Dizinin %d inci indisi %d dir\n",i+1,dizi[i]);
	}
	
	return 0;
}
