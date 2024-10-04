//calculate  person  annual sakary..

#include<stdio.h>
int main()
{
	
	float monthlysalary,annualsalary;
	
	printf("\nenter your monthly salary = ");
	scanf("%f",&monthlysalary);
	
	annualsalary=monthlysalary*12;
	
	printf("\nyour yearly salary is = %.2f\n",annualsalary);
	
	return 0;
}
