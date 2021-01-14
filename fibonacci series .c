/*
find fibonacci series
*/
#include<stdio.h>

void main()
{
	int a=0,b=1,n,result,i;
	printf("enter the value of n = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf(" %d",a);
		 result=a+b;
		  a=b;
	     	b=result;	
	}
	
}
