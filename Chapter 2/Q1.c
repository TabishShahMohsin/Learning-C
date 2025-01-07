#include<stdio.h>
int main(){

	int a; b=a;
	// Problem b isn't defined and hence will raise an error.
	int v=3^3;
	// This won't raise an error due to ^ being the bitwise XOR operator and not work like pow(x,y) from math.h.
	char dt='21 dec 2020';
	// This will also raise an error due to:
		// 21 dec 2020 being an string(to be discussed later) not a charater.
		// Strings can't be made by single quotes (''), but characters are made this way.
	return 0;
}
