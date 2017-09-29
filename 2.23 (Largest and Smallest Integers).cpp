#include<stdio.h>
int main(void)
{
	int i,entered,smallest,largest;
	for(i=0;i<5;i++)
	{
		printf("\nenter %d. number:",i+1);  scanf("%d",&entered);
		//initializer values
		if(i==0)
		{
			smallest=entered;
			largest=entered;

		}
		//calculatest smallest value
		if(entered<=smallest)
		{
			smallest=entered;
		}
		//calculates largest value

		if(entered>=largest)
		{
			largest=entered;
		}



	}

	printf("\nlargest= %d\t\tsmallest= %d",largest,smallest);



	return 0;


}












