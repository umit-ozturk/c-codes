 /*�ekil 2.5:prog02_07.c
   Not Hesaplama program�*/
#include<stdio.h>	//printf,scanf gibi temel fonksiyonlar
#include<conio.h>	// Windows ta getch() fonksiyonunu kullanmak i�in kullan�l�r

main(){		
 float vize1,vize2,final; /*bildirim*/
 float ortalama;
 
 printf ( "Ilk vizenizi giriniz\n" ); /*mesaj yazd�rma*/
 scanf ( "%f",&vize1); /*ilk vizenin okunmas�*/
 printf ( "Ikinci vizenizi giriniz\n" ); /*mesaj yazd�rma*/
 scanf ( "%f",&vize2); /*ikinci vizenin okunmas�*/
 printf("Finalinizi giriniz \n");
 scanf("%f",&final); //Final in okunmas�
 
 ortalama=((final*0.5)+(vize1*0.25)+(vize2*0.25));
 
	if(ortalama >= 80){		//E�er s�f�rdan b�y�k ise bloklar aras�ndaki komutlar� �al��t�r.
		printf("Ortalamaniz %f\'dir.\t\t AA ile gectiniz.",ortalama);
	}
	if(ortalama >= 50 &&  ortalama < 80){		//E�er s�f�r ise bloklar aras�ndaki komutlar� �al��t�r.
		printf("Ortalamaniz %f\'dir.\t\t BA ile gectiniz.",ortalama);
	}
	if(ortalama < 50){		//E�er s�f�rdan k���k ise bloklar aras�ndaki komutlar� �al��t�r.
		printf("Ortalamaniz %f\'dir.\t\t FF ile kaldiniz tebrikler :\)",ortalama);
	}
	
 getch(); /*program�n ba�ar�yla sona erdi�ini belirtmek*/
 }
