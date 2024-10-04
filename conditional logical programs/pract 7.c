//7. Accept marks from user and check pass or fail


#include<stdio.h>
int main()
{
	
	int mark;
	
	printf("\nenter the mark ==");
	scanf("%d",&mark);
	
	if(mark>0 && mark<33)
	
	{
		printf("fail");
	}
	else
	{
		printf("pass");
		
	}
	return 0;
}
