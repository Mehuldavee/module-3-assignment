//QUE.7 : WAP Find out length of string without using inbuilt function
#include<stdio.h>
#include<string.h>
int main()
{
	char str[200],i,length=0;
	printf("enter the string = ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	printf("\nstring = %s",str);
	printf("\nlength = %d",length);
	
	return 0;
}
   
	
