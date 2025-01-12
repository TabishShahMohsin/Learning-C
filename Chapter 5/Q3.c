#include<stdio.h>

float force(float mass);

int main(){

	float m;
	printf("Enter mass of a body: ");
	scanf("%f", &m);

	printf("The force of attraction exerted by Earth on the body of mass %f, is: %f\n", m, force(m));

	return 0;
}

float force(float mass){
	return 9.8*mass;
}
