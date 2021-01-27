/*
dynamic memory allocation in c language 
*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i,*ptr,newsize;
	printf("Enter the size of array = ");
	 scanf("%d",&n);
	 
	ptr=(int*)malloc(n*sizeof(int));        //  memory is  allocated by malloc function
	 if(ptr==NULL)
	 
	  printf("memory is not allocated and procees is termenating");
	   else
	   for(i=0;i<n;i++)
	   {
	   printf("\nThe value of %d position of dynamic array =  ",i+1);
	    scanf("%d",(ptr+i));
       }
   for(i=0;i<n;i++)
   {
       printf("\nThe value of %d position of dynamic array = %d and its address = %d\n ",i+1,*(ptr+i),(ptr+i));
       
   }
   
   printf("\n---------------------------------------------------------------------\n");
   
   printf("\nEnter the new size of array = ");
   scanf("%d",&newsize);
   
   ptr = realloc(ptr,(n + newsize)* sizeof(int));             // realloc fucnction is used
   
    if(ptr==NULL)
	 
	  printf("memory is not allocated and procees is termenating");
	  
     else
     
	   for(i=0;i< n+newsize;i++)
	   {
	   printf("\nThe value of %d position of dynamic array =  ",i+1);
	    scanf("%d",(ptr+i));
       }
   for(i=0;i< n+newsize;i++)
   {
       printf("\nThe value of %d position of dynamic array = %d and its address = %d",i+1,*(ptr+i),(ptr+i));
       
   }
   printf("\nNow work is complete so released memory allocated ");
   
   free(ptr);
}
