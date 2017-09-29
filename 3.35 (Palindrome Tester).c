#include<stdio.h>

int main(void)
{

    int n,n1,n2,n3,n4,n5;

    printf("enter the number: "); scanf("%d",&n);

    n5=n%10;
    n4=(n%100-n%10)/10;
    n3=(n%1000-n%100)/100;
    n2=(n%10000-n%1000)/1000;
    n1=(n%100000-n%10000)/10000;

    if(n1==n5&&n2==n4) printf("\n\nYES!!! YES!!");
    else printf("\n('_') not polindrome")  ;

    printf("\t%d %d %d %d %d",n1,n2,n3,n4,n5);



    return 0;

}
