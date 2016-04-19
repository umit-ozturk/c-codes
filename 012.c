#include<stdio.h>
#include<conio.h>
/*
 * ==========================================================================
 *                     Filename:     012.c
 *                     Description:  My strlen function //Library
 *                     Created:      19.04.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */
	// Library //

int lenght (char a[30]){
	int le=0;
	while (1){
		if (a[le]=='\0')break;
		le++;
	}
	return le;
}

main(){
	
	char a[30];
	printf("Enter the word\n");scanf("%s",a);
	int re;
	
	re=lenght(a);
	printf("lenght : %d",re);
	
	
	getch();
}
