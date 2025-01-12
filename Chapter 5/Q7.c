#include<stdio.h>

void triangle(int row_count);

int main(){

	int n;
	printf("Enter number of rows needed in star-triangle: ");
	scanf("%d", &n);

	triangle(n);

	return 0;
}

void triangle(int row_count){
	for(int i=1;i<=row_count;i++){
		for(int j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
}
