//convert school's name in abbbreviated from..

#include<stdio.h>
int main()

{
	
	char schname[100],abr[100];
	int i,j=0;
	
	printf("\nEnter schname = ");
	gets(schname);
	
	
	for(i=0;schname[i]!='\0';i++)
	{
		if((i==0 || schname[i-1]==' ') && schname[i]!=' ')
		{
			abr[j] = schname[i];
			j++;
		}
	}
	strupr(abr);
	
	printf("\nabbriviated from = %s",abr);
	
	return 0;
}

