#include<stdio.h>
int main(){

	int year;
	printf("Enter year: ");
	scanf("%d", &year);

	if ((year%4==0) && ( !(year%100==0) || (year%400==0)))
		printf("This year is a leap year.\n");
	else
		printf("This year isn't a leap year.\n");
	return 0;
}
