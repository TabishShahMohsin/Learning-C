#include<stdio.h>

float celcius_to_farenheit(float temperature_in_c);

int main(){

	float temp_in_celcius;
	
	printf("Enter temperature in celcius: ");
	scanf("%f", &temp_in_celcius);

	printf("The temperature %f celcius is equal to %f farenheit.\n",temp_in_celcius, celcius_to_farenheit(temp_in_celcius));

	return 0;
}

float celcius_to_farenheit(float temperature_in_c){
	return	temperature_in_c*9/5+32;
}
