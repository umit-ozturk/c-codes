 /*�ekil 2.5:prog02_05.c
   Toplama program�*/
#include<stdio.h>
#include<conio.h>	// Windows ta getch() fonksiyonunu kullanmak i�in kullan�l�r

main(){		
 int tamsayi1,tamsayi2,toplam; /*bildirim*/

 printf ( "Ilk tamsayiyi giriniz\n" ); /*mesaj yazd�rma*/
 scanf ( "%d",&tamsayi1); /*ilk tamsay�n�n okunmas�*/
 printf ( "Ikinci tamsayiyi giriniz\n" ); /*mesaj yazd�rma*/
 scanf ( "%d",&tamsayi2); /*ikinci tamsay�n�n okunmas�*/
 toplam = tamsayi1+tamsayi2; /*toplam�n atanmas�*/
 printf ( "Toplam %d dir\n",toplam ); /*toplam�n yazd�r�lmas�*/

 getch(); /*program�n ba�ar�yla sona erdi�ini belirtmek*/
 }

