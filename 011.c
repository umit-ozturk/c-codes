/*
 * ==========================================================================
 *                     Filename:     11.c
 *                     Description:  Pointer Test Call By Referance
 *                     Created:      15.03.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */


#include<stdio.h>

void degerdegistir (int *a,int *b){
	
	int c;
	
	c=*a;
	*a=*b;
	*b=c;
}


int main(){
	
	int x=5,y=10;
	
	degerdegistir(&x,&y);
	printf("x: %d , y=%d",x,y);
	
	return 0;
}
