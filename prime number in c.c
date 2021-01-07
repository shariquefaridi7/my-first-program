/*
To check whether a number is prime or not
*/
#include<stdio.h>

void main()
{
 int a,i, factor=0;
 printf("enter the number :");
 scanf("%d",&a);	
	
	for(i=1;i<=a;i++)
	
	{
	if(a%i==0)
	
    {
    factor++;
    }
    }
		
	if(factor==2)
	{
			
	printf("the number is prime number");
    }
	else
	{
	
	printf("the number is not prime prime number");
    }
		 	
}

