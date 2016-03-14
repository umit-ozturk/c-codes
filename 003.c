/*
 * ==========================================================================
 *                     Filename:     3.c
 *                     Description:  Faktoriyel Hesabbi
 *                     Created:      09.03.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */

#include<stdio.h>
#include<conio.h>


int main(){
	
	int n,s,f=1;
	
	printf("Kac faktoriyel :\t");
	scanf("%d",&n);
	
	for (s=1;s<=n;s++){
		f=f*s;

	}
		printf("%d! = %d \n",n,f);
	
	
	return 0;
}
