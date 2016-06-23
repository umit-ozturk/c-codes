/*
 * ==========================================================================
 *                     Filename:     013-Quick Sort.c
 *                     Description:  Sorting Algorithms - Quick Sort
 *                     Created:      20.06.2016
 *
 *         Author:  Ümit Öztürk
 *
 *						Karmaþýklýk (Complicacy): Best    // n \n  log(n)
 *												  Avarage // n log(n)
 *												  Worst   // n^2
 *
 *						Approach: Divide And Conquere
 *
 *					    Note:http://www.bilgisayarkavramlari.com/2008/08/09/hizli-siralama-algoritmasi-quick-sort-algorithm/
 *					    Bu dökümandanda faydalanýlabilir Þadi Evren Þeker'e Teþekkürler.		
 *
 * ==========================================================================
 */



#include<stdio.h>
#include<conio.h>

void quicksort (int a[],int fi,int li){   // Sýralama fonksiyonun baþladýðý yer
										  // fi:firstindex li:lastindex 
	int pi,x,i1,i2;						  // pi:pivotindex i1:index1 i2:index2
		
		if(fi < li){
			
			pi=fi;			//pi nin ilk deðere atanmasýnýn sebebi orjinal makalede
			i1=fi;			// ilk deðer seçilmesidir farklý deðerlerede atanabilir
			i2=li;			
		
			while(i1 < i2){
					while(a[i1] <= a[pi] && i1 < li) i1++;
					while(a[i2] > a[pi]) i2--;
					if(i1<i2){
							x=a[i1];
							a[i1]=a[i2];
							a[i2]=x;
					}
			}
			x=a[pi];
			a[pi]=a[i2];
			a[i2]=x;
			
			quicksort(a,fi,i2-1);
			quicksort(a,i2+1,li);
			
		}
}


main(){
	
	int a[20],n,i; // a: dizi n: alýnacak sayý i:döngü deðiþkeni
	
	printf("How many numbers you entered.\n");scanf("%d",&n);
		for(i=0;i<n;i++){ /* Arrayi belleðe aldýk */
			printf("Enter %d number: ",i+1);
			scanf("%d",&a[i]);
			printf("\n");
		}
	quicksort(a,0,n-1); // Sýralama fonksiyonu
	
	printf("\nAfter sorting: ");
	
		for(i=0;i<n;i++) printf(" %d ",a[i]); // Sýralanmýþ arrayi yazdýrýyoruz.
	
	getch();
}
