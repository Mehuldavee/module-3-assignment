//WAP CONVERT YEAR into days and month..


#include<stdio.h>
int main()
{
	
	int  days,month,years;
	
	printf("\nEnter the years  ==");
	scanf("%d",&years);
	
	
	days = years*365;
	
	month = years*12;
	
	printf("%d  year = %d  days and %d  month",years,days,month);
	
	return 0;
	
}


