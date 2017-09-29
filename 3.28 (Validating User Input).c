#include<stdio.h>


int main(void)
{
    int c=1,n,pass=0,fail=0;



    while(c<=10)
    {
        printf("\nplease enter 1 or 2: "); scanf("%d",&n);
        if(1==n)
        {
           pass=pass+1;
           printf("\n\t% d - passes = %d\n",c,pass);
           c++;
        }
    else if(2==n)
    {
        fail=fail+1;
        printf("\n\t %d - fails = %d\n",c,fail) ;
        c++;
    }
    else
    {
        printf("\n %d - please enter a valid input!!!",c);

    }
    }

     printf("\n\npass = %d\tfail=%d",pass,fail);




}
