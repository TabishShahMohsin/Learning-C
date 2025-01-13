#include<stdio.h>

	struct complex{

		int real;
		int imaginary;

	};

void display(struct complex c);

int main(){

	struct complex c1;

	printf("Enter real and imaginary parts of a number:\n");
	scanf("%d%d", &c1.real, &c1.imaginary);

	display(c1);

	return 0;
}

void display(struct complex c){

	printf("%d+ i%d\n", c.real, c.imaginary);

}
