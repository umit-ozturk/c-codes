 /*�ekil 2.5:prog02_06.c
   C�kartma program�*/
#include<stdio.h>	//printf,scanf gibi temel fonksiyonlar
#include<conio.h>	// Windows ta getch() fonksiyonunu kullanmak i�in kullan�l�r

main(){		
 float say1,say2,top; /*bildirim*/
 printf ( "Ilk sayiyi giriniz\n" ); /*mesaj yazd�rma*/
 scanf ( "%f",&say1); /*ilk tamsay�n�n okunmas�*/
 printf ( "Ikinci sayiyi giriniz\n" ); /*mesaj yazd�rma*/
 scanf ( "%f",&say2); /*ikinci tamsay�n�n okunmas�*/
 top = say1-say2; /*toplam�n atanmas�*/

	if(top > 0){		//E�er s�f�rdan b�y�k ise bloklar aras�ndaki komutlar� �al��t�r.
		printf("Sayiniz %f\'dir.\t\t %f pozitif bir sayidir.",top,top);
	}
	if(top == 0){		//E�er s�f�r ise bloklar aras�ndaki komutlar� �al��t�r.
		printf("Sayiniz %.1f\'dir.",top);
	}
	if(top < 0){		//E�er s�f�rdan k���k ise bloklar aras�ndaki komutlar� �al��t�r.
		printf("Sayiniz %.2f\'dir.\t\t %.3f negatif bir sayidir.",top,top);
	}
	
 getch(); /*program�n ba�ar�yla sona erdi�ini belirtmek*/
 }
