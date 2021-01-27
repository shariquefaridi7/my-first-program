
/*
dynamic memoray allocation in c languag
*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,*ptr,n;
	printf("\n --Enter the size of array = ");
	scanf("%d",&n);
	
	ptr= (int*)malloc(n*sizeof(int));        // memory is allocated by malloc function 
	 if(ptr==NULL)
	 printf("MEMROY IS NOT ALLOCATE AND PROGRAM PROCESS IS TERMINATING");
	 else
	 for(i=0;i<n;i++)
	 {
	  printf(" \nThe value of %d of dynamic array = ",i+1);
	   scanf("%d",(ptr+i));
     }
	for(i=0;i<n;i++)
	{
		printf("\nthe value of %d of dynamic array = %d and its adress = %d  ",i+1,*(ptr+i),(ptr+i));
		
	}
	printf("\n Now work is completed  so released the allocated memory");
	free(ptr);	
}
