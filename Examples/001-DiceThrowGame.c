#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int diceThrow()
		{
			int dice1,dice2,totaldice;
			
			dice1=1+(rand()%6);
			dice2=1+(rand()%6);
			 totaldice=dice1+dice2;
			 printf("You throw %d + %d\n Your Skor %d\n ",dice1,dice2,totaldice);
			 
		return totaldice;
		}


main(){
	
	int gameStat,total,gamerpoint;
	
	srand(time(NULL));
	total=diceThrow();
	
	switch(total){
		case 7: case 11:
			gameStat=1;
			break;
			
		case 2: case 3: case 12:
			gameStat:2;
			break;
			
		default:
			gameStat=0;
			gamerpoint=total;
			printf("You will win dice: %d\n",gamerpoint);
			break; 
	}
	
	while(gameStat==0){
		total=diceThrow();
		
			if(total==gamerpoint) gameStat=1;
			else if(total==7) gameStat=2;
	}
		
		if(gameStat==1) printf("You win");
		else printf("You lost :(");		

	
	
	getch();
}
