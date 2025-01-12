#include<stdio.h>
int main(){

	int i=8,*j, **k;
	//&& means and, can't use &&
	j=&i;
	k=&j;

	printf("i is **k: %d\n", **k);

	return 0;
}
