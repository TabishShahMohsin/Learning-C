#include<stdio.h>

int main(){

	int ThreeD[3][4][2];
	// Can't name 3D

	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			for(int k=0; k<2; k++){
				printf("%p", &ThreeD[i][j][k]);
				if(k!=2)
					printf(", ");
			}
			printf("\n");
		}

			printf("\n");
	}

	return 0;
}
