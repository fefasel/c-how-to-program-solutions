#include<stdio.h>

int main(void)
{
   int side,side2,i,k;
    char c;
    printf("enter the side of square:"); scanf("%d",&side);
    printf("enter the character: "); scanf(" %c",&c)  ;





    for(i=side;i>=1;i--)
    {
        for(k=1;k<=side;k++)
        {
            printf("%c ",c);
        }
        printf("\n");

    }




}
