/*
 * ==========================================================================
 *                     Filename:     8.c
 *                     Description:  While Loop Example
 *                     Created:      14.03.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */



#include<stdio.h>


int main(){
	
	int i=0,kg=0;
	int x=0,c=0,v=0,b=0,n=0;
	
	
	while(i<10){
		printf("%d inci Agirlik giriniz:",i+1);
		scanf("%d",&kg);
		if (kg>=0 && kg<=20) x++;
		if (kg>=21 && kg<=40) c++;
		if (kg>=41 && kg<=60) v++;
		if (kg>=61 && kg<=80) b++;
		if (kg>=81) n++;
		i++;
	}
	printf("0-20 kg arasindaki kisiler:%d\n",x);
	printf("21-40 kg arasindaki kisiler:%d\n",c);
	printf("41-60 kg arasindaki kisiler:%d\n",v);
	printf("61-80 kg arasindaki kisiler:%d\n",b);
	printf("+80 kgdan sonraki kisiler:%d\n",n);
	

	return 0;
}
