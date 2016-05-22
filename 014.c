/*
 * ==========================================================================
 *                     Filename:     014.c
 *                     Description:  Simple Struct Example
 *                     Created:      02.05.2016
 *
 *         Author:  Ümit Öztürk
 *
 * ==========================================================================
 */
#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
	typedef	struct {
		int sicil;
		char nm[10];
		char sn[10];
		int age;
		int brut;
		int sex;} personel;
	personel p1={123,"aaaa","bbbb",20,100,1};	
		printf(" sicil : %d\n ad : %s \n soyad : %s \n yas : %d \n brut : %d \n cinsiyet : %d",p1.sicil,p1.nm,p1.sn,p1.age,p1.brut,p1.sex);
	
	
	getch();
	}
