#include<stdio.h>
int main(){

	int length, width;

	printf("Enter Length and Width of the rectangle:\n");

	scanf("%d%d", &length, &width);
	// Unfortunately we can't add " Enter length : %d" in scanf, it doesn't support this.
	// but we can use "%d%d", length, bredth to get 2 variables at one or use to scanfs will work as well.
	
	printf("The area of the rectangle is: %d\n", length*width);

	return 0;}
