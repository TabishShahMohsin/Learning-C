#include<stdio.h>
int main(){

	float side, area;

	printf("Enter side of a square: ");
	scanf("%f", &side);

	area=side*side;

	printf("The area of the	square with side %f is: %f\n", side, area);

	return 0;
}
