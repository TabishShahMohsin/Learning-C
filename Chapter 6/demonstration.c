#include<stdio.h>
int main(){

	int i=8, *j;
	// Means that value of j (*j) is an integer.
	j=&i;
	printf("int i=8;\nint *j;\nj=&i;\n\n\n");
	printf("i: %d\n", i);
	printf("*j: %d\n", *j);
	printf("*(&i): %d\n", *(&i));
	printf("&i: %p\n", &i);
	printf("j: %p\n", j);
	printf("&j: %p\n", &j);



	int a=8, *b, *c;
	printf("\n\n\n\nint a=8, *b, *c;\n");
	b=&a;
	printf("b=&a;\n");
	printf("Assignment by referece.\n");
	*c=a;
	printf("*c=a;\n");
	printf("Assignment by value.\n\n");
	printf("a: %d\n", a);
	printf("*b: %d, *c: %d\n", *b, *c);
	printf("&a: %p\n", &a);
	printf("b: %p, c: %p\n", b, c);
	printf("&b: %p, &c: %p\n", &b, &c);


	a=10;
	printf("\n\na=10;\n");
	*b=11;
	printf("*b=11;\n");
	*c=12;
	printf("*c=12;\n");


	printf("a: %d\n", a);
	printf("*b: %d, *c: %d\n", *b, *c);
	printf("&a: %p\n", &a);
	printf("b: %p, c: %p\n", b, c);
	printf("&b: %p, &c: %p\n", &b, &c);

	return 0;
}
