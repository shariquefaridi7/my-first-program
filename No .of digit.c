/*
find no of digit in the numbers in c program
*/
#include<stdio.h>
void main()
{
	int a,count=0;
	printf("Enter the value of a = "); 
	scanf("%d",&a);
	
	while(a>0)
	{ 
	  a=a/10;
	  count++;
	}
	printf("No of digit = %d",count); 
	
	
}
