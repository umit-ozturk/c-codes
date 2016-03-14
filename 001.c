/*
 * ==========================================================================
 *                     Filename:     1.c
 *                     Description:  While Loop
 *                     Created:      24.02.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */
 
#include<conio.h>
#include<stdio.h>


main() {
	int k=0,m,s=0,a;
	float ort;
	while (k<5){
		printf("%d nci sayiyi girin",k+1);
		scanf("%d",&m);
		k++;
		if (m%2==0) {
		s++;
		a=a+m;
	}
	}
