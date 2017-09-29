#include<stdio.h>
#include<math.h>

int main(void)
{

    int decimal,n,n1,n2,n3,n4,n5,n6,n7,n8;

    printf("enter the number"); scanf("%d",&n);

    n8=n%10;
    n7=(n%100-n%10)/10;
    n6=(n%1000-n%100)/100;
    n5=(n%10000-n%1000)/1000;
    n4=(n%100000-n%10000)/10000;
    n3=(n%1000000-n%100000)/100000;
    n2=(n%10000000-n%1000000)/1000000;
    n1=(n%100000000-n%10000000)/10000000;

    printf("\n%d ==> %d %d %d %d %d %d %d %d",n,n1,n2,n3,n4,n5,n6,n7,n8)  ;


    decimal=n1*pow(2,7)+n2*pow(2,6)+n3*pow(2,5)+n4*pow(2,4)+n5*pow(2,3)+n6*pow(2,2)+n7*pow(2,1)+n8*pow(2,0) ;

    printf("\ndecimal equavalent = %d",decimal);




}
