 /*Þekil 2.5:prog02_06.c
   Cýkartma programý*/
#include<stdio.h>	//printf,scanf gibi temel fonksiyonlar
#include<conio.h>	// Windows ta getch() fonksiyonunu kullanmak için kullanýlýr

main(){		
 float say1,say2,top; /*bildirim*/
 printf ( "Ilk sayiyi giriniz\n" ); /*mesaj yazdýrma*/
 scanf ( "%f",&say1); /*ilk tamsayýnýn okunmasý*/
 printf ( "Ikinci sayiyi giriniz\n" ); /*mesaj yazdýrma*/
 scanf ( "%f",&say2); /*ikinci tamsayýnýn okunmasý*/
 top = say1-say2; /*toplamýn atanmasý*/

	if(top > 0){		//Eðer sýfýrdan büyük ise bloklar arasýndaki komutlarý çalýþtýr.
		printf("Sayiniz %f\'dir.\t\t %f pozitif bir sayidir.",top,top);
	}
	if(top == 0){		//Eðer sýfýr ise bloklar arasýndaki komutlarý çalýþtýr.
		printf("Sayiniz %.1f\'dir.",top);
	}
	if(top < 0){		//Eðer sýfýrdan küçük ise bloklar arasýndaki komutlarý çalýþtýr.
		printf("Sayiniz %.2f\'dir.\t\t %.3f negatif bir sayidir.",top,top);
	}
	
 getch(); /*programýn baþarýyla sona erdiðini belirtmek*/
 }
