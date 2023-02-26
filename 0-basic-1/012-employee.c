#include <stdio.h>

/**
 * main - accept one int(Id) and two floats(salary and working hours)
 * output the Id and their salary
 * 
 * Return: 0 (Success)
 */

int main(void)
{
	/*
	 * use scanf and printf
	 */

	int id;

	float work_hours, salary;

	printf("Input the Emloyee's ID(Max 10 chars): ");
	fflush(stdout);
	scanf("%d", &id);
	printf("Input the working hrs: ");
	fflush(stdout);
	scanf("%f", &work_hours);
	printf("Salary amount/hr: ");
	fflush(stdout);
	scanf("%f", &salary);

	printf("Employees ID = %d\n", id);
	printf("Salary = U$ %.2f\n", salary * work_hours);

	return (0);
}
