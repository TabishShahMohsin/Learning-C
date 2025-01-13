#include<stdio.h>

typedef struct complex{

	float real;
	float imaginary;

}CN;

void display(CN c);

int main(){

	CN c1;

	printf("Enter real and imaginary parts of a number:\n");
	scanf("%f%f", &c1.real, &c1.imaginary);

	display(c1);

	return 0;
}

void display(CN c){

	printf("%f+ %fi\n", c.real, c.imaginary);

}
