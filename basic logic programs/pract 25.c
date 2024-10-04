//accept 5 expense from user and find average of expense.

#include<stdio.h>
int main()
{
	
	int  food, tranportation, utility, personalcare, entertinement,sumofexp;  
	float average;
	
	printf("\nenter expense of food == ");
	scanf("%d",&food);
	
	printf("\nenter expense of transportation == ");
	scanf("%d",&tranportation);
	
	printf("\nenter expense of utility == ");
	scanf("%d",&utility);
	
	printf("\nenter expense of personalcare == ");
	scanf("%d",&personalcare);
	
	printf("\nenter expense of entertinement == ");
	scanf("%d",&entertinement);
	
	sumofexp = food+ tranportation+ utility+ personalcare+ entertinement;
	average = (float)sumofexp/5;
	
	printf("\navarage of expense = %f",average);
	
	return 0;
}

