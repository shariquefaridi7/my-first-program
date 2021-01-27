/*
dynamic memory allocation
*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i,*ptr;
	printf("Enter the size of dynamic array = ");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	
	if(ptr==NULL)
	printf("memory is not allocate that why work is not complete");
	
	else
	
	for(i=0;i<n;i++)
   {
	printf("\nThe value of %d positin of dynamic array = ",i+1);
	scanf("%d",(ptr+i));
	}
	
	for(i=0;i<n;i++)
	{
	
		printf("\nThe value of %d positin of dynamic array = %d and its address = %d\n",i+1,*(ptr+i),(ptr+i));	
		
    }
	printf("\nNow work is completed so released the allocated memory");
	free(ptr);	
	
}
