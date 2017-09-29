#include<stdio.h>


int main(void)
{
	int foo,bar,ratio;
	
	printf("\nenter two integer\n"); scanf("%d%d",&foo,&bar);
	
	if((foo%bar)==0)
	{
		ratio=foo/bar;
		printf("first is %d times second",ratio);
	}
	
	if((bar%foo)==0)
	{
		ratio=bar/foo;
		printf("\nsecond is %d times first",ratio);
	}
	
	if(    !((bar%foo)==0)    &&    !((foo%bar)==0)    )
	{
		printf("they are not multiple of each others");
	}
	
}
