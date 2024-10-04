//wap to  convert year into days and days  into year/..#include <stdio.h>
//30.WAP to convert years into days and days into years
int main()
{
	float years , days , copy;
	
	printf("Enter the number of years :"); 
	scanf("%f",&years);
	
	printf("Enter the number of days:");
	scanf("%f",&days);
	
	copy= years;
	
	years = days / 365;
	
	printf("\n%f days = %.1f  years",days,years);
	
	days = copy * 365;
	
	printf("\n%f years = %.1f  days",copy,days);
	
	return 0;
}
