#include<stdio.h>
#include<conio.h>



main(){
	int i,a;
	int flag=0;
	printf("Sayinizi giriniz");
	scanf("%d",&a);
		for(i=2;a/2;i++){
			
			if(a%i == 0){
				flag=1;
			}
			i++;
		}
		if(flag==1){
			printf("Sayiniz asal degildir");
		}
		else 
		printf("Sayiniz asaldir");

	getch();
}
