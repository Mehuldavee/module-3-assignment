#include <stdio.h>
//31.Convert kilometers into meters
int main()
{
	int meters, kilometers;
	
	printf("Enter the value of Kilometers:");
	scanf("%d", &kilometers);
	
	meters = 1000 * kilometers ;
	
	printf("%d kilometers = %d meters", kilometers, meters);
}
