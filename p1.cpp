//wap to demonstrate concept of structure
#include<stdio.h>
main()
{
	struct employee
	{
	int empid;//structure member
	char empname[50];

#include<stdlib.h>t salary;	
	};
	struct employee e;//structure variable
printf("Enter Employee Id :");
scanf("%d",&e.empid);
fflush(stdin);
printf("Enter Employee Name :");
gets(e.empname)	;
printf("Enter Employee Salary :");
scanf("%ld",&e.salary);
printf("Employee's Details\n");
printf("Employee's Id=%d\n",&e.empid);
printf("Employee's Name=%s\n",&e.empname);
printf("Employee Salary=%ld\n",&e.salary);
}
