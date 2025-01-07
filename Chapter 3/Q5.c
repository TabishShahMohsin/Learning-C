#include<stdio.h>
int main(){

	char inp;
	printf("Enter a char: ");
	scanf("%c", &inp);

	if (inp<=122 && inp>=97)
		// Can direcly compare char to its integer ASCII Value in C
		printf("The character %c is lowercase.\n", inp);
	else
		printf("The character %c entered is not lowercase.\n", inp);
	


	return 0;
}
