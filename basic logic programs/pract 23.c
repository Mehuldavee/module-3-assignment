//WAP swap to number with using multiplication and division....


#include<stdio.h>
int main()
{
	
	int a,b;
	
	printf("\nEnter the value of A ==");
	scanf("%d",&a);
	printf("\nEnter the value of b ==");
	scanf("%d",&b);



        a =  a*b;
        b =  a/b;
        a =  a/b;
         
    printf("\nafter swaping value of a = %d\n",a);
	printf("\nafter swaping val of b = %d\n",b);
	
	return 0;
}


