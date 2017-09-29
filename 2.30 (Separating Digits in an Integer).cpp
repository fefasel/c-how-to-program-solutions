#include<stdio.h>

int main(void)
{
	int a,a_1,a_1r,a_2,a_2r,a_3,a_3r,a_4,a_4r,a_5,a_5r ;
	printf("enter a five-digits number:"); scanf("%d",&a);
	
	a_1=(a-(a%10000))/10000;
	
	a_1r=(a%10000);
	a_2=(a_1r-(a_1r%1000))/1000;
	
	a_2r=(a_1r%1000);
	a_3=(a_2r-(a_2r%100))/100;
	
	a_3r=(a_2r%100);
	a_4=(a_3r-(a_3r%10))/10;
	
	a_4r=(a_3r%10);
	a_5=(a_4r-(a_4r%1))/1;
	
	printf("%d\t%d\t%d\t%d\t%d",a_1,a_2,a_3,a_4,a_5);
	
}
