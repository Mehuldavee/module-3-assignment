//17.calculate person insurance premium based on salary..

#include<stdio.h>
int main()

 {
 	
 	int sal; float premium = 0 ;
 	
 	printf("\nenter the salary = ");
 	scanf("%d",&sal);
 	
 	if(sal<=7000)
 	{
 		printf("\nno premium");
    }
 	
 	else if(sal<50000)
 	{
 		premium=sal*0.10;
 	
    }
 	else if(sal<100000) 
	{
		premium=sal*0.20;
	
    }
	else
	{
		premium=sal*0.30;
	
    }
 printf("\ntotal premium %.2f ",premium);
 return 0;
 
		  	
 }
