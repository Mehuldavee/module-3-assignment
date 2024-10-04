//convert tremperature fahrenhit to celsius

#include<stdio.h>
int main()

{
	  float  fahrenhit,celsius;
	  
	  printf("\nenetr tempreture fahrenhit == ");
	  scanf("%f",&fahrenhit);
	  
	  celsius = (fahrenhit-32)*5/9;
	  
	  printf("\ntemprature of celsius is = %.2f\n",celsius);
	  
	  return 0;
	  
}
