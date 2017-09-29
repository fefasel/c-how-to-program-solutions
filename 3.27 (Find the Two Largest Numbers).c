#include<stdio.h>
#include<conio.h>

int main(void)
{
    int entered,lar1,lar2,counter=1;

    while(counter<=10)

    {
        printf("enter %d. number: ",counter); scanf("%d",&entered);
        if(1==counter)
        {
            lar1=entered;
            lar2=lar1;
        }


        if(entered>lar1)
        {

            lar2=lar1;
            lar1=entered;

        }
        if(entered<lar1)
        {
            if(lar1==lar2)
            {
                lar2=entered;
            }
            if(entered>=lar2)
            {
                lar2=entered;
            }


        }

        counter++;
        printf("\n");

    }
        printf("\n lar1=%d  lar2=%d",lar1,lar2);





}
