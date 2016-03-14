/*
 * ==========================================================================
 *                     Filename:     10.c
 *                     Description:  Metini Ters Cevirme
 *                     Created:      14.03.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */


#include<stdio.h>

void terscevir (char dizi[]){
	
	int i,u,x;
	
	u = strlen(dizi);
	
	for (i=0; i < u/2 ; i++){
		
		x=dizi[i];
		dizi[i]=dizi[u-1-i];
		dizi[u-1-i]=x;
	}
}

int main(){
	
	char text[300];
	
	printf("Ters cevirilecek metini giriniz\n");
	scanf("%s",text);
	
	terscevir(text);
	printf("\n%s",text);
	
	return 0;
}
