#include<stdio.h>
void display(struct employee);
struct employee
{
	int empid;
	char name[32];
	float salary;
};
int main()
{
	struct employee e1;
	printf("Enter id, name and salary");
	scanf("%d%s%f",&e1.empid,&e1.name,&e1.salary);
	display(e1);
	return 0;
}
void display(struct employee e2)
{
	printf("empid=%d",e2.empid);
	printf("name=%s",e2.name);
	printf("salary=%f",e2.salary);
}
