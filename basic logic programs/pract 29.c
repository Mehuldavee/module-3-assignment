//29.Convert minutes into seconds and hours


#include<stdio.h>

int main()
{
	
	float minute,second,hour;
	
	
	printf("\nenter the minute ==  ");
	scanf("%f",&minute);
	
	
	second = minute*60;
	
	hour = minute/60;
	
	
	printf("\n%.2f minnute =  %.2f second and \n%.2f hour",minute,second,hour);
	
	return 0;
}
