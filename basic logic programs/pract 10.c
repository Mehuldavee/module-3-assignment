// find the area of rectangular prism formula : A=2(wl + hl + hw)..


#include<stdio.h>
int main()

{
	
	int a,wl,hl,hw,area;
	
	printf("\nenter the value of A = ");
	scanf("%d",&a);
	
	printf("\nenter width of area = ");
	scanf("%d",&wl);
	
	printf("\nenter length of area = ");
	scanf("%d",&hl);
	
	printf("\nenter hight of area = ");
	scanf("%d",&hw);
	
	area = a=2*(wl+hl+hw);
	printf("\nrectangle prism is %d",area);
	
	return 0;
}
