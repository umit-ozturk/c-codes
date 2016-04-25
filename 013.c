#include<stdio.h>
#include<string.h>
/*
 * ==========================================================================
 *                     Filename:     0.13.c
 *                     Description:  Lesson Examples
 *                     Created:      25.04.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */
/*---------------------------------------------------------------------------*/
/* Metini ters ceviren fonksiyon*/
void terscevir (char dizi[]){
	
	int i,u,x;
	
	u = strlen(dizi);
	
	for (i=0; i < u / 2 ; i++){
		
		x=dizi[i];
		dizi[i]=dizi[u-1-i];
		dizi[u-1-i]=x;
		
	}
}

/*----------------------------------*/
/* 'e' lerin sayisini bulan program */

int bul (char dizi[]){
	int a=0,i,u=0;
	
	u = strlen(dizi);
	
		for(i=0;i<u;i++){
		if(dizi[i]=='e') a++;
	}
	return a;
	
}

/*-----------------------------------------*/
/* 'le' hecesinin sayýsýný bulan fonksiyon */

int lebul (char dizi[]){
	int a=0,i,u;
	u =strlen(dizi);
	
		for (i=0;i<u;i++){
			if(dizi[i]=='l' && dizi[i+1]=='e')a++;
		}
	return a;
}

/*----------------------------------------*/

/* Kelime sayisini bulan fonksiyon */
int kelime (char dizi[]){
	int a=1,i,u=0;
	
	u  = strlen(dizi);
	
		for(i=0;i<u;i++){
			if(dizi[i]==' ')a++;
		}
	
	return a;
}
/*---------------------------------*/
int main(){
	int re1,re2,re3;
	char text[300];
	
	printf("Ters cevirilecek metini giriniz\n");
	gets(text);

	re1=bul(text);
	re2=kelime(text);
	re3=lebul(text);
	terscevir(text);/* Bu fonksiyonu en son gönder cünkü cümleyi ters ceviriyor ve diðer iþlemleri etkiliyor */
	
	
	printf("\nTers Hali \n%s\n",text);
	printf("\n'e' lerin sayisi: %d\n",re1);
	printf("\nKelime sayisi: %d\n",re2);
	printf("\n'le' lerin sayisi: %d\n",re3);
	printf("\n%s",text);
	
	return 0;
}
