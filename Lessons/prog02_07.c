 /*Þekil 2.5:prog02_07.c
   Not Hesaplama programý*/
#include<stdio.h>	//printf,scanf gibi temel fonksiyonlar
#include<conio.h>	// Windows ta getch() fonksiyonunu kullanmak için kullanýlýr

main(){		
 float vize1,vize2,final; /*bildirim*/
 float ortalama;
 
 printf ( "Ilk vizenizi giriniz\n" ); /*mesaj yazdýrma*/
 scanf ( "%f",&vize1); /*ilk vizenin okunmasý*/
 printf ( "Ikinci vizenizi giriniz\n" ); /*mesaj yazdýrma*/
 scanf ( "%f",&vize2); /*ikinci vizenin okunmasý*/
 printf("Finalinizi giriniz \n");
 scanf("%f",&final); //Final in okunmasý
 
 ortalama=((final*0.5)+(vize1*0.25)+(vize2*0.25));
 
	if(ortalama >= 80){		//Eðer sýfýrdan büyük ise bloklar arasýndaki komutlarý çalýþtýr.
		printf("Ortalamaniz %f\'dir.\t\t AA ile gectiniz.",ortalama);
	}
	if(ortalama >= 50 &&  ortalama < 80){		//Eðer sýfýr ise bloklar arasýndaki komutlarý çalýþtýr.
		printf("Ortalamaniz %f\'dir.\t\t BA ile gectiniz.",ortalama);
	}
	if(ortalama < 50){		//Eðer sýfýrdan küçük ise bloklar arasýndaki komutlarý çalýþtýr.
		printf("Ortalamaniz %f\'dir.\t\t FF ile kaldiniz tebrikler :\)",ortalama);
	}
	
 getch(); /*programýn baþarýyla sona erdiðini belirtmek*/
 }
