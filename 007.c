/*
 * ==========================================================================
 *                     Filename:     7.c
 *                     Description:  Sonsuz Dongu Ornegi
 *                     Created:      14.03.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */




#include<stdio.h>
#include<string.h>

int main(){
	
	int k=1,x=0,c=0;
	char ad[10];
	char can[3];
	while (1){
		printf("Isim giriniz:\n");
		scanf("%s",ad);
	if(strcmp(ad,"son")==0)break;
	/*********** Ustten gecerse isim artmak zorunda ************/	
		x++;
	if (strcmp(ad,"can")==0){
			c++;
			}	
}
	printf("Isim sayisi : %d\n",x);
	printf("Can sayisi:%d",c);
	
	
	return 0;
}
