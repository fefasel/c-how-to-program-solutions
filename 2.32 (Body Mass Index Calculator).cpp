#include<stdio.h>

int main(void)
{
	float bmi,weight,height;
	
	printf("enter your weight(in kilograms ex: 1.76):"); scanf("%f",&weight);
	printf("enter your height(in meters ex: 1.45):"); scanf("%f",&height);
	
	
	bmi=(weight)/(height*height);
	
	if(bmi>=30)
	{
		printf("\nweight:%.2f\theight:%.2f\nbmi: %.2f",weight,height,bmi);
		printf("\tObese");
	}
	if(bmi<=29.9&&bmi>25)
	{
		printf("\nweight:%.2f\theight:%.2f\nbmi: %.2f",weight,height,bmi);
		printf("\tOverweight");
		
	}
	if(bmi<=24.9&&bmi>18.5)
	{
		printf("\nweight:%.2f\theight:%.2f\nbmi: %.2f",weight,height,bmi);
		printf("\tnormal");
	}
	if(bmi<=18.5)
	{
		printf("\nweight:%.2f\theight:%.2f\nbmi: %.2f",weight,height,bmi);
		printf("\tunderweight");
	}
}
