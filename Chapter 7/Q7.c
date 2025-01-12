#include<stdio.h>

int main(){

	int table[3][10], factors[]={2,7,9};

	for(int i=0; i<3; i++){

		for(int j=0; j<10;j++){

			table[i][j]=(j+1)*factors[i];

		}

	}

	for(int i=0; i<3; i++){

		for(int j=0; j<10;j++){

			printf("%d", table[i][j]);
			if(j==9)
				continue;
			printf(", ");

		}

		printf("\n");

	}

	return 0;
}
