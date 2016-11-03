#include<stdio.h> //standart input output kütüphanesi
#include<conio.h> //windows

main(){
	int i,j,a;
	
	printf("Ne kadar buyuklukte bir carpým tablosu olacak");
	scanf("%d",&a);
	for(i=1;i <= a;i++){
		for(j=1;j <= a ;j++){
			printf(" %d ",i*j);	
		}
		printf("\n");
	}
	getch();
}
