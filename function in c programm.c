/*
coing in function
*/
#include<stdio.h>
int a,b,c;
  void main()
 {
  function1();
  function2();
  c=a+b;
  function3();
  function1();
  function2();
   c=a-b;
  function3();
  }
  function1()
  {
  printf("enter the value of a ");
  scanf("%d",&a);
  }
  function2()
  {
   printf("enter the value of b ");
  scanf("%d",&b);	
  
  	
  }
  function3()
  {
  	 printf("-- the value of c--- =%d\n",c);
  
  	
  }
