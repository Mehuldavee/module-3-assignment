//covert days into month..

#include<stdio.h>
int main()

{
	
	float days,month;
	
	printf("\nEnter the number of days ==");
	scanf("%f",&days);
	
	month = (float)days/30;
	
	printf("number of months: %.1f\n",month);
	
	return 0;
}
