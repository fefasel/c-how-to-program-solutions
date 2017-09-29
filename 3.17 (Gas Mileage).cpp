#include<stdio.h>

int main(void)
{
	float gallon,miles,average,total=0,milesGallon;
	int counter=0;
	
	
	
	printf("\nenter the gallons used(-1 to end): "); scanf("%f",&gallon);
	
	while(gallon!=-1)
	{
		printf("\nenter the miles driven: "); scanf("%f",&miles);
	    
	    milesGallon=miles/gallon;
	    
	    printf("the miles/gallon for this tank was %.2f\n\n",milesGallon);
	    total=total+milesGallon;
	    counter++;
	    
	    printf("\nenter the gallons used(-1 to end): "); scanf("%f",&gallon);
	    
	    
		
	}
	average=total/counter;
	printf("\n\n The overall average miles/gallon was: %f",average);
	
	
}
