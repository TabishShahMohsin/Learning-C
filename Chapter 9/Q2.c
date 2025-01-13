#include<stdio.h>

struct vector{
	int x;
	int y;
};

struct vector add(struct vector v1, struct vector v2);

int main(){
	
	struct vector vec1={5,6};
	struct vector vec2={1,2};
	struct vector vec3; 	
	vec3=add(vec1, vec2);
	printf("Using add(vec1,vec2): x: %d, y: %d\n", vec3.x, vec3.y);
	return 0;
}

struct vector add(struct vector v1, struct vector v2){
	
	struct vector v3;
	v3.x=v1.x+v2.x;
	v3.y=v1.y+v2.y;
	return v3;

}
