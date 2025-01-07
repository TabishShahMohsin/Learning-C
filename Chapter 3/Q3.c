#include<stdio.h>
int main(){

	float income=0, tax=0;
	printf("Enter your annual income: ");
	scanf("%f", &income);
	
	if (income<=250000)
		tax=0;
	else if (income<=500000)
		tax=(income-250000)*0.05;
	else if (income<=100000)
		tax=250000*0.05+(income-500000)*0.2;
	else 
		tax=250000*0.05+500000*0.2+(income-1000000)*0.3;
	printf("The tax on income %f is: %f\n", income, tax);

	switch((int)income/250000){
		case 0:
			tax=0;
			break;
		case 1:
			tax=(income-250000)*0.05;
			break;
		case 2:
			tax=250000*0.05+(income-500000)*0.2;
			break;
		case 3:
			tax=250000*0.05+(income-500000)*0.2;
			break;
		default:
			tax=250000*0.05+500000*0.2+(income-1000000)*0.3;
			break;
	}

	
	printf("The tax on income %f is: %f\n", income, tax);
	return 0;
}
