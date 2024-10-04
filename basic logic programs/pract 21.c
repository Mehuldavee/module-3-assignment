//accept 2 number from the user and swap 2 numbers with using 3rd varialble and without
//3rd variable

/*#include<stdio.h>
int main()
{
	
	int a,b,temp;
	
	printf("\nEnter the value of A ==");
	scanf("%d",&a);
	printf("\nEnter the value of b ==");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\nafter swaping value of a = %d",a);
	printf("\nafter swaping val of b = %d",b);
	
	return 0;

	
}*/
   
        //  by 2 variable..


#include<stdio.h>
int main()
{
	
	int a,b;
	
	printf("\nEnter the value of A ==");
	scanf("%d",&a);
	printf("\nEnter the value of b ==");
	scanf("%d",&b);



        a = a +  b;
        b =  a - b;
        a = a - b;
         
    printf("\nafter swaping value of a = %d",a);
	printf("\nafter swaping val of b = %d",b);
	
	return 0;
         
}
