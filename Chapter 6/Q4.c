#include <stdio.h>

void sum_and_avg(float*x, float*y){
	*x=*x+*y;
	*y=*x/2;
}

int main(){

	float a, b;
	printf("Enter 2 numbers for sum and anverage:\n");
	scanf("%f%f" ,&a, &b);

	sum_and_avg(&a,&b);
	// Could have also given 2 more variables sum and avg in it to get the function return 2 values.

	printf("Their sum is: %f and product is: %f.\n", a, b);

	return 0;
}
