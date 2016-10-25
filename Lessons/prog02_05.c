 /*Þekil 2.5:prog02_05.c
   Toplama programý*/
#include<stdio.h>
#include<conio.h>	// Windows ta getch() fonksiyonunu kullanmak için kullanýlýr

main(){		
 int tamsayi1,tamsayi2,toplam; /*bildirim*/

 printf ( "Ilk tamsayiyi giriniz\n" ); /*mesaj yazdýrma*/
 scanf ( "%d",&tamsayi1); /*ilk tamsayýnýn okunmasý*/
 printf ( "Ikinci tamsayiyi giriniz\n" ); /*mesaj yazdýrma*/
 scanf ( "%d",&tamsayi2); /*ikinci tamsayýnýn okunmasý*/
 toplam = tamsayi1+tamsayi2; /*toplamýn atanmasý*/
 printf ( "Toplam %d dir\n",toplam ); /*toplamýn yazdýrýlmasý*/

 getch(); /*programýn baþarýyla sona erdiðini belirtmek*/
 }

