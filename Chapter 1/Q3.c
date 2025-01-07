#include<stdio.h>
// somehow it works with or without the space in between
int main(){

	float centigrade;

	printf("Enter the temperature in centigrade: ");
	scanf("%f", &centigrade);

	printf("The corresponding temperature in farenheit is: %f\n", 9* centigrade/5 + 32); 



	return 0;
}
