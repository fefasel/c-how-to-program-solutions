
#include<stdio.h>
#include<conio.h>
	int main(void)
	{
		int entered,i ,a, b, c;
		int larger = 0;
		int smallest;
		int entered1;
		int sum = 0;
		for (i = 0; i < 3; i++)
		{
			printf("\nenter %d. number:",i+1); scanf("%d",&entered);
			
			if (entered>=larger)
			{
				larger = entered;
				printf("\nlarger now %d\n",larger);
			}
            	sum = sum + entered;
			    printf("sum is now =%d\n\n",sum);
			    
			if(i==0)
			{
		        smallest=entered;
		        printf("smallest number is %d now\n\n",smallest);
			}   
			 	    
			if(i>0)
			{
				if(entered<=smallest)
				{
					smallest=entered;
					printf("\nsmallest is %d now",smallest);
				}
				printf("\n\n");
			}
			    
		}
		float average = (float)(sum) / 3;

		printf("\nlarger numer is %d", larger);
		printf("\nsmallest number is %d",smallest);
		printf("\n sum is %d and average is %.2f",sum,average);
		return 0;
	}

