#include<stdio.h>
#include<conio.h>

	struct date
	{
	int day;
	int mount;
	int year;
};

struct date cal(struct date a,struct date b);
int caldays(struct date a,struct date b);
int calhours(int a);
int calmin(int a);
int calsec(int a);

int main(){
		
		struct date birth;
		struct date today;
		struct date re;
		int red,reh,rem,res;
		
	printf("Enter the birthday\n");
	scanf("%d %d %d",&birth.day,&birth.mount,&birth.year);
	printf("Enter today\'s date\n");
	scanf("%d %d %d",&today.day,&today.mount,&today.year);
	
	re=cal(birth,today);
	red=caldays(birth,today);
	reh=calhours(red);
	rem=calmin(reh);
	res=calsec(rem);
	printf("%d days %d mounts %d years \n\nso %d total days \nso %d total hours \nso %d total minutes \nso %d total seconds alive here \n\ncongrats... :)",re.day,re.mount,re.year,red,reh,rem,res);
	getch();
	
}

struct date cal(struct date a,struct date b){
	
	struct date re;

	if (a.day >b.day){
		b.day+=30;
		b.mount-=1;
	}	
	
	if (a.mount >b.mount){
		b.mount+=12;
		b.year-=1;
	}
	
	re.day=b.day-a.day;
	re.mount=b.mount-a.mount;
	re.year=b.year-a.year;
	
	return re;
}

int caldays(struct date a ,struct date b){
	int day,re=0;
		while(b.year>a.year){
		
			day=365;
				if(b.year%4==0){
					day=366;
				}
			re+=day;
		b.year--;
	}
	return re;
}

int calhours(int a){
	int re;
		re=a*24;
	
	return re;
}

int calmin(int a){
	int re;
		re=a*60;
	
	return re;
}

int calsec(int a){
	int re;
		re=a*60;
	
	return re;
}
