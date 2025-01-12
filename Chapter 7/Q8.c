#include<stdio.h>

int main(){
	
	int x, y;
	printf("Enter 3 numbers for their tables:\n");
	int factors[3];
	scanf("%d%d%d", factors, factors+1, factors+2);


	int table[3][10];

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
