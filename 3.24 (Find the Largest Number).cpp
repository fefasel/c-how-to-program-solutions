#include<stdio.h>

int main(void)
{
	int i,largest,smallest,entered;
	
	for(i=1;i<=10;i++)
	{
		printf("enter the %d. number: ",i); scanf("%d",&entered);
		
		if(i==1)
		{
			largest=entered;
			smallest=entered;
		}
		
		if(i>1)
		{
			
			if(entered>largest)
			{
				largest=entered;
			}
			if(entered<smallest)
			{
				smallest=entered;
			}
			
			
		}
		
		printf("\nnow smallest =%d and largest =%d\n",smallest,largest);
		
	}
	printf("\n\n final!!!\nsmallest  =  %d and largest  =  %d",smallest,largest);
	
	
}
