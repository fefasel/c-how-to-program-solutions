#include<stdio.h>

int main(void)
{
    int counter=1,c,numberof=0;


    do
    {
        c=getchar();
        printf("\t");
        putchar(c);printf("\t %d",c);
        if(c%7==0) numberof++;
        printf("\nnumber of= %d\n",numberof);

    }

    while(c!=-1);



}
