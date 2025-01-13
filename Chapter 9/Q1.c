#include<stdio.h>

int main(){

	struct vector{
		
	int x;
	int y;

	};

	struct vector vec1={5,6};

	printf("x: %d, y: %d", vec1.x, vec1.y);
	return 0;
}
