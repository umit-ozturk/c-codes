/*
 * ==========================================================================
 *                     Filename:     2.c
 *                     Description:  N Adet Sayinin Ortalamasi
 *                     Created:      09.03.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */

#include<stdio.h>
#include<conio.h>


int main(){
	
	int n,s;
	float t,a;
	
	printf("Kac sayinin ortalamasi alinacak :");
	scanf("%d",&n);
	
	for (s=1;s<=n;s++){
		printf("%d. sayiyi girin:",s);
		scanf("%f",&a);
		t=t+a;
	}	
	
	printf("Girilen sayilarin aritmetik ortalamasi %.2f tir",t/n);
	
	
	return 0;
}
