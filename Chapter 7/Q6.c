#include<stdio.h>

void get_int_array(int *ptr, int n);


int main(){
	int n;
	int positive=0, negative=0;
	printf("Enter array length:");
	scanf("%d", &n);
	int inputted_array[n];
	// Must define array after getting its length.
	
	get_int_array(inputted_array, n);

	for(int i=0; i<n; i++){

		if(inputted_array[i]>0)
			positive++;
		else if(inputted_array[i]<0)
			negative++;

	}

	printf("The number of negative numbers in a array is %d and positive numbers is %d.\n", negative, positive);
	return 0;
}

void get_int_array(int *ptr, int n){

	//	int in_array[n];
	// Can't do this as this will fade from memory after the function returns a value, this will make sence after the chapter 11, or we would need to user malloc(() also in chap 11.

	for(int i=0; i<n; i++){

		printf("Enter element %d of the array: ", i+1);
		scanf("%d", ptr+i);

	}

}


