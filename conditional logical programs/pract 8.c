#include <stdio.h>
/*
8. WAP to accept the height of a person in centimeters and categorize the
person according to their height.
*/
int main()
{
	
	float height;
	
	printf("\nenter the hight of person ==");
	scanf("%f",&height);
	
	
	if(height >=2.5 && height <=4.5)
	{
		printf("\nsmall person");
	}
	
	else if(height >=4.5 && height <=6)
	{
		printf("\nmidium person" );
	}
	else
	{
		printf("\ntell person");
	}
	return 0;
}
