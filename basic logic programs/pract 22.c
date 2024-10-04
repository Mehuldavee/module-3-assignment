#include <stdio.h>
#include<math.h>
int main()
/*
22.Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P
*/


{
	float p,r,t,compinterest,amount;
	
	
	printf("\nenter the value of p == ");
	scanf("%f",&p);
	printf("\nenter the value of r == ");
	scanf("%f",&r);
	printf("\nenter the value of t == ");
	scanf("%f",&t);
	
	amount = p*(1 + r/100)*t;
	
	compinterest = amount - p;
	
	printf("\ntotal amount after interest is: %2lf\n",amount);
	printf("\ncompound interest is: %2lf\n",compinterest);
	
	return 0;
	
	}
	
