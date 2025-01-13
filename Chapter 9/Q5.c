#include<stdio.h>

	struct complex{

		int real;
		int imaginary;

	};


int main(){

	struct complex c1;

	printf("Enter real and imaginary parts of a number:\n");
	scanf("%d%d", &c1.real, &c1.imaginary);

	return 0;
}
