#include<stdio.h>
#include<string.h>


struct employee{
	int code;
	float salary;
	char name[30];
};


void show(struct employee something);

int main(){


	struct employee Employee_array[3];

	for(int i=0;i<3;i++){
		char name[30];
		printf("Enter code, salary and name of the student %d: ", i+1);
		struct employee e;
		e=Employee_array[i];
		scanf("%d%f%s", &e.code, &e.salary, name);
		strcpy(e.name, name);
		Employee_array[i]=e;


	}

	for(int i=0; i<3; i++){
		show(Employee_array[i]);
	}
	return 0;
}


void show(struct employee e){
	printf("Code: %d\nSalary: %f\nName: %s\n", e.code, e.salary, e.name);
}
