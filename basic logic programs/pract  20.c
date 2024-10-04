//accept monthly salary from user  and deduct 10% insurence premiuum and 10% loan
//installment  find out on remaiining salary.

#include<stdio.h>
int main()

{
	float sal,premium,loan,remainingsalary;
	
	printf("enter your salary ===");
	scanf("%f",&sal);
	
	premium = sal*0.10;
	loan    = sal*0.10;
	
	remainingsalary = sal-(premium+loan);
	
	printf("remainingsalary after deduction:%2f\n",remainingsalary);
	
	return 0;
	
}

