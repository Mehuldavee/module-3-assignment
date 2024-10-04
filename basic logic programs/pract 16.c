//covert country's name in abbreviated from.


#include<stdio.h>
int main()

{
	
    char counname[100],abr[100];
    int i,j=0;
    
    printf("enter country name = ");
    gets(counname);
    
    for(i=0;counname[i]!='0';i++)
    
    {
    	if((i==0 || counname[i-1]==' ') && counname[i]!=' ')
    	 
    	 {
    	 	abr[j] = counname[i];
    	 	j++;
		 }
	}
		 
		 strupr(abr);
		 printf("\nabbrivated from = %s",abr);
		
    	
	
	return 0;
}


	
