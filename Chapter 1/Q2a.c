#include <stdio.h>
int main(){

	float radius;
	// It's better to name the variables after what they store or tend to do for better readability of the code.
	printf("Enter radius of the circle: ");
	// Not using newline character (\n) here would get the cursur right next to the colon while inputing radius in the running phase of the program
	scanf("%f", &radius);
	printf("The area of the circle with radius %f is %f\n", radius, 3.14*radius*radius);	


	return 0;
}
