#include<stdio.h>

int main(void)
{
	float balance,charges,credits,climit,fbalance;
	int acnumber;
	
	printf("\nEnter account number (-1 to end):"); scanf("%d",&acnumber);
	
	while(acnumber!=-1)
	{
		printf("\nEnter beginning balance:"); scanf("%f",&balance);
	    printf("\nEnter total charges: "); scanf("%f",&charges);
	    printf("\nEnter total credits:"); scanf("%f",&credits);
	    printf("\nEnter credit limit: "); scanf("%f",&climit);
	
	    fbalance=balance+charges-credits;
	
	    printf("\n\nAccount: %d",acnumber);
	    printf("\nCredit limit: %.2f",climit);
	    printf("\nBalance: %.2f",fbalance);
	    printf("\nCredit Limit: %.2f",climit);
    	if((climit-fbalance)<0)
    	{
	    	printf("\n\nfinal balance: %.2f",climit-fbalance);
	    	printf("\nCredit Limit Exceeded!!!\n\n");
    	}
    	else
    	{
		
        	printf("\n\nfinal balance: %.2f\n\n",climit-fbalance);
    	}
		printf("\nEnter account number (-1 to end):"); scanf("%d",&acnumber);
		
   	}
	
	
	
}
