/*
 * ==========================================================================
 *                     Filename:     4.c
 *                     Description:  For D�ng�s� ile Fonksiyon Al�st�rmas�
 *                     Created:      09.03.2016
 *
 *         Author:  �mit �zt�rk
 *
 * ==========================================================================
 */

#include<stdio.h>


void yaz (int n){
	
	int s;
	
	for (s=1;s<=n;s++){
		printf("s.a\n");
	}
	
}


int main(){
	
	int n;
	
	printf("Kac defa yazilsin: \t");
	scanf("%d",&n);
	
	yaz(n);
	
	return 0;
}
