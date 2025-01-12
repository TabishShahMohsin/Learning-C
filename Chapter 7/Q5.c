#include<stdio.h>

void get_int_array(int *ptr, int n);

void print_array(int *ptr, int length);

int main(){
	int n;
	int dummy;

	printf("Enter array length:");
	scanf("%d", &n);
	int inputted_array[n];
	// Must define array after getting its length.
	
	get_int_array(inputted_array, n);

	for(int i=0; i<n/2; i++){

		dummy=inputted_array[i];
		inputted_array[i]=inputted_array[n-1-i];
		inputted_array[n-1-i]=dummy;	

	}

	print_array(inputted_array, n);

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


void print_array(int (*ptr), int length){
	
	printf("{");
	for(int i=0; i<length ; i++){

		printf("%d", *(ptr+i));
		if(i!=length-1)
			printf(", ");

	}
	printf("}\n");
}
