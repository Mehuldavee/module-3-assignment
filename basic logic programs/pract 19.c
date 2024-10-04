//calculate compound intrest.



#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	
	float p,r,t,CI;
	
	printf("enter the value of principle = ");
	scanf("%f",&p);
	printf("enter the value of rate = ");
	scanf("%f",&r);
	printf("enter year = ");
	scanf("%f",&t);
	
	CI=p*(pow((1+r/100),t));
	printf("CI %f",CI);
	
	return 0;
	
}
