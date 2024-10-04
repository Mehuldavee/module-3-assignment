//QUE.16 Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main()
{

    int num[200],size,sum = 9,i;
	
	for(i=0;i<5;i++)
	{
	 
	    printf("\nenter the element is num[%d] = ",i);
		scanf("%d",&num[i]);
		
	}
	for(i=0;i<5;i++)
	{
	
	   printf("%d",num[i]);
		
	}
	
	for(i=0;i<5;i++)
	{
		sum = sum + num[i];
	}
	
	printf("\naddition of sum is = ",num[i]);
    return 0;
}
