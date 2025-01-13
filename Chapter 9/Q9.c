#include<stdio.h>

typedef struct date{
	int year;
	int month;
	int day;
}date;

int compare(date d1, date d2);

int main(){

	date a={2024, 13, 1};
	date b={2024, 13, 2};
	date c={2024, 13, 1};
	
	if (!compare(a,b))
		printf("a and b are not the same dates.\n");
	if (compare(a,b))
		printf("a and b are the same dates.\n");
	if (compare(a,c))
		printf("a anc c are the same dates.\n");
	if (compare(b,c))
		printf("b anc c are the same dates.\n");

	return 0;
}

int compare(date d1, date d2){
	if(d1.year==d2.year && d1.month==d2.month && d1.day==d2.day)
		return 1;
	return 0;
}

