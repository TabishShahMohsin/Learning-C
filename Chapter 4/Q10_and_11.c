#include<stdio.h>
int main(){

	int n, i=2;
	char is_prime='Y';
	
	printf("Enter number to check for prime: ");
	scanf("%d", &n);

	if(n==1){
		printf("1 isn't prime\n");
		return 0;
	}
	else if(n==2){
		printf("2 is prime\n");
		return 0;
	}

	for(;i<1+n/2.0;i++){
		if(n%i==0){
			is_prime='N';
			break;
		}
	}

	if(is_prime=='Y')
		printf("The number %d is prime.\n", n);
	else
		printf("The number %d isn't prime.\n", n);
		

	i=2;
	is_prime='Y';
	while(i<1+n/2.0){
		if(n%i==0){
			is_prime='N';
			break;
		}
		i++;
	}

	if(is_prime=='Y')
		printf("The number %d is prime.\n", n);
	else
		printf("The number %d isn't prime.\n", n);


	i=2;
	is_prime='Y';
	do{
		if(n%i==0){
			is_prime='N';
			break;
		}
		i++;
	}while(i<1+n/2.0);

	if(is_prime=='Y')
		printf("The number %d is prime.\n", n);
	else
		printf("The number %d isn't prime.\n", n);
			
	return 0;
}
