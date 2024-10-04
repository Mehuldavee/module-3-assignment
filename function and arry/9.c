//QUE. 9 : WAP to show difference between Structure and Union.
#include<stdio.h>
struct student
{

    int roll;
    float per;
    char grd;;
};
	 union demo


{
    int num;
    char ch;
    float f1;
};	
int main()
{

    struct student s1;
	s1.roll=1001;
	s1.per=76.78;
	s1.grd='b';
	
	printf("\nstudent roll no = %d",s1.roll);
	printf("\nstudent percentage = %.2f",s1.per);
	printf("\nstudent grade = %c\n\n",s1.grd);
	
	union demo d1;
	d1.num = 105;
	d1.num = 105;
	d1.ch = 'b';
	
	
	printf("\nvalue of num = %d",d1.num);
	printf("\nvalue of ch = %c",d1.ch);
	
	
	return 0;
}


