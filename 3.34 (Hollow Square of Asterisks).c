#include<stdio.h>

int main(void)
{
    int side,i,k,z,t;
    char c;



    printf("enter the side of square: "); scanf("%d",&side);
    printf("\nenter the character of square: "); scanf(" %c",&c);


        for(k=1;k<=side;k++)
        {
            if(k==1 || k==(side))
            {
                for(t=1;t<=side;t++)
                {
                    printf("%c",c);

                }

            }
            else
            {
                int hallow=side-2; //number of hallows
                printf("%c",c);
                for(z=1;z<=hallow;z++)
                {
                    printf(" ");

                }
                printf("%c",c);

            }

            printf("\n");
        }



        return 0;



}
