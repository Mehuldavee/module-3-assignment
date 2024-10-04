//accept 5 employees name and salary and count average ad total salary.

#include<stdio.h>
int main()
{
	
	int mehul, raj, mitesh, soham, nisarg, totalsalary;  //EMP names..
	float average;
	
	printf("\nenter salary mehul == ");
	scanf("%d",&mehul);
	
	printf("\nenter salary raj == ");
	scanf("%d",&raj);
	
	printf("\nenter salary mitesh == ");
	scanf("%d",&mitesh);
	
	printf("\nnenter salary soham == ");
	scanf("%d",&soham);
	
	printf("\nenter salary nisarg == ");
	scanf("%d",&nisarg);
	
	totalsalary = mehul + raj + mitesh + soham + nisarg;
	average = (float)totalsalary/5;
	
	printf("\ntotal salary = %d",totalsalary);
	printf("\navarage of salary = %.2f",average);
	
	return 0;
}
