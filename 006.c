/*
 * ==========================================================================
 *                     Filename:     6.c
 *                     Description:  Asal Sayi mi?
 *                     Created:      14.03.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */



#include<stdio.h>


int asalmi (int sayi){
	
	int i;

	for(i=2;i<sayi;i++){
		if (sayi % i == 0) return 0;
		
	}
	
	return 1;
}


int main(){
	int n;
	
	printf("Sayi Girin");
	scanf("%d",&n);
	
	if (asalmi(n)==0) printf("Bu sayi asal degildir");
	
	else printf("Bu sayi asaldir");
	
	return 0;
}
