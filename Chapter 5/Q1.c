#include<stdio.h>

float avg_of_3(float num1, float num2, float num3);

int main(){
	int a, b, c;

	printf("Enter the 3 numbers:\n");
	scanf("%d%d%d", &a, &b, &c);

	printf("The average of the tree numbers %d, %d, and %d is %f\n", a, b, c, avg_of_3(a,b,c));
	

	return 0;
}

float avg_of_3(float num1, float num2, float num3){
	return (num1+num2+num3)/3;
}
