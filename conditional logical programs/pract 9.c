#include <stdio.h>
/*
9. C Program to Check Uppercase or Lowercase or Digit or Special
Character
*/

int main()

{
	
	char character;
	
	printf("\nenter any character ==");
	scanf(" %c",&character);
	
	if(character >='A'  &&  character <='Z')
	{
		printf("\nupercash ");
		
	}
	
	else if(character >='a'  &&  character <='z')
	{
		printf("\nlowercash ");
		
	}
	
	else if(character >='0'  &&  character <='9')
	{
		printf("\ndigit ");
		
	}
	
    else 
	{
		printf("\nspecial character ");
		
	}
	
	return 0;
}
