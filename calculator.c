/* 
   switch program in c language
*/
 #include<stdio.h>
  
  void main()
  
  {
  	while(1)
  	{
	  
  int choice,a,b,c;

  printf("\n1 addition");
  printf("\n2 subtraction ");
  printf("\n3 multipication");
  printf("\n4 division");
  printf("\n5 exit");
   printf("\nvalue of choice = ");
  scanf("%d",&choice);
   switch(choice)
  {
   case 1: printf("\nenter the value of a =  ");
          scanf("%d",&a);
          printf("enter the value of b = ");
         scanf("%d",&b);
         c=a+b;
         printf("the value of c =  %d\n",c);
		 break;
		 
    case 2 :  printf("\nenter the value of a =  ");
          scanf("%d",&a);
          printf("enter the value of b = ");
         scanf("%d",&b);
         c=a-b;
         printf("the value of c =  %d\n",c);
         break;
         
    case 3 :  printf("\nenter the value of a =  ");
          scanf("%d",&a);
          printf("enter the value of b = ");
         scanf("%d",&b);
         c=a*b;
         printf("the value of c =  %d\n",c);
         break;
         
    case 4 : printf("\nenter the value of a =  ");
          scanf("%d",&a);
          printf("enter the value of b = ");
         scanf("%d",&b);
         c=a/b;
         printf("the value of c =  %d\n",c);
         break;
     case 5 : exit(0);
         
         default:printf("\nchoice is invalid\n");
		 }
		 
		 }
		 
   }	
  	

