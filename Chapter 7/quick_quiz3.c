#include<stdio.h>

void display(int n, int m, int a[n][m]);

int main(){

	int grid[3][3];

	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Enter for row %d and column %d: ", i+1, j+1);
			scanf("%d", &grid[i][j]);
		}
	}
	
	display(3,3,grid);
	return 0;
}


void display(int n,int m, int a[n][m]){


	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d", a[i][j]);
			if (j!=m-1)
				printf(", ");
		}
		printf("\n");
	}
	

}
