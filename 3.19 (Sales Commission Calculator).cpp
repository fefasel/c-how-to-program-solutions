#include<stdio.h>

int main(void)
{
	float salary,sale;
	
	printf("enter sales in dollars(-1 to end): "); scanf("%f",&sale);
	
	while(sale!=-1)
	{
		salary=(sale*(0.09))+200;
		printf("\nsalary is %2.f",salary);
		printf("\nenter sales in dollars(-1 to end): "); scanf("%f",&sale);
		
		
	}
}
