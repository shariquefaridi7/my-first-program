/*
   find LCM in c program
*/
#include<stdio.h> 

void main()
{
	int a,b,L;
	printf("enter the value of two number = ");
     scanf("%d%d",&a,&b);
	 
	 for(L=1;L<=a*b;L++)
	 if(L%a==0&&L%b==0)
	 {
	 	break;
	 }
	 printf("LCM of two number = %d",L);
 }
