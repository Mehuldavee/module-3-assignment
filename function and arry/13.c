//QUE.13 WAP to accept 5 numbers from user and check entered number is even or odd
//	using of array

#include<stdio.h>

int main()

{
    int a[5],ecount=0,ocount=0,i;
	for(i=0;i<5;i++)
	{
	
	    printf("\nenter the element a[%d] = ",i);
	    scanf("%d",&a[i]);
}
	for(i=0;i<5;i++)
    {
	
	    if(a[i]%2==0)
		
		
		{
			printf("\neven numer is %d",a[i]);
			
	}
	
		else
		{
		
		    printf("\nodd number is %d",a[i]);
	}
}
	return 0;
}










