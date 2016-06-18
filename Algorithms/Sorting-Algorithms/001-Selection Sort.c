/*
 * ==========================================================================
 *                     Filename:     001-Selection Sort.c
 *                     Description:  Sorting Algorithms - Selection Sort 
 *                     Created:      18.06.2016
 *
 *         Author:  Ümit Öztürk
 *
 *		   			   Karmaşıklık (Complicacy):n^2
 *					   Note: http://www.bilgisayarkavramlari.com/2008/08/09/secerek-siralama-selection-sort/
 *					   Bu dökümandanda faydalanılabilir Şadi Evren Şeker'e Teşekkürler.
 *
 * ==========================================================================
 */
#include<stdio.h>
#include<conio.h>

main(){
	
	int a[20],s,i,j,x;
	/* Değerleri Kullanıcıdan al */
	printf("How many numbers you entered.\n");scanf("%d",&s); 	/* Kaç sayı gireceğini kullanıcıdan aldım */
	for(i=0;i<s;i++){						/* Değerleri indislere atadık */
		printf("Enter %d number:",i+1);
		scanf("%d",&a[i]);
		printf("\n");
	}	/* Selection Sort Algoritmasının Başladığı Yer */
			for(i=0;i<s;i++){	     /* 1. indis seçilir ve iç içe fordan anlaşılacağı üzere geri kalan tüm indislerle */
				for(j=i+1;j<s;j++){  /* tek tek karşılaştırır.  */
					if(a[i]>a[j]){			/* Eğer a[i] indisi a[j] indisinden büyük ise */
						x=a[i];			/* klasik yer değiştirme algoritması yapar  */  
						a[i]=a[j];
						a[j]=x;
					}
				}
			}
		/* Selection Sort ile Sıralanan Arrayin Ekrana Basıldığı Yer */			
	printf("\nAfter sorting: ");
	for(i=0;i<s;i++)	printf(" %d ",a[i]);
	
	
	getch();
}
