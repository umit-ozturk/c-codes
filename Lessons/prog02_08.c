#include<stdio.h> //standart input output kütüphanesi
#include<conio.h> //windows

main(){
	int a=30; //bildirim
	
	while(a<60){
		
		if(a%3==0 || a%7==0){
			printf("%d \n",a);
		}
		a=a+1; // a++
	}
	
	
	getch();
}
