#include <stdio.h>
int main(){

	float radius;
	float height;
	printf("Enter radius of the circle: ");
	scanf("%f", &radius);
	//scanf() by default moves the cursor to the new line so no need to printf("\n") after taking the variables from the user.
	printf("Enter height of the circle: ");
	scanf("%f", &height);
	printf("The volume of the circle is %f\n", 3.14*radius*radius*height);	


	return 0;
}
