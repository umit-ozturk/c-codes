#include<stdio.h> //standart input output kütüphanesi
#include<conio.h> //windows

main(){
	int a,i=0,sayi,enbyk=0;
	printf("Sayi adedi giriniz");
	scanf("%d",&a);
	
	
	while(i<a-1){
		
		printf("Sayilarinizi giriniz");
		scanf("%d",&sayi);
		if(sayi > enbyk){
			enbyk=sayi;
		}
		i=i+1; //	i++
	}
	printf("En buyuk sayi %d \' dir",enbyk);
	
	getch();
}
