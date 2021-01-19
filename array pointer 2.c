/*
array pointer in two dimensional
*/
#include<stdio.h>

void main()
{
  int A[2][2],i,j,*ptr;
  printf(" ------------------The value of  A----------------------------\n ");
  	
  	for(i=0;i<2;i++)	
  	{
  		for(j=0;j<2;j++)
  		{
  			printf("Enter the value of A[%d][%d] = ",i+1,j+1);
  			scanf("%d",&A[i][j]);  			
	    }
    }
    ptr=&A;
    printf("---------------------------------------------------------------\n");
		printf(" The value of A[1][1]=%d\n",*ptr);
     	printf(" The value of A[1][2]=%d\n",*ptr+1);
  	    	printf(" The value of A[2][1]=%d\n",*ptr+2); 
  	    	printf(" The value of A[2][2]=%d\n",*ptr+3);
  	printf("---------------------------------------------------------------\n");  	 
	     printf(" The address of A[1][1]=%d\n",ptr);
     	printf(" The address of A[1][2]=%d\n",ptr+1);
  	    	printf(" The address of A[2][1]=%d\n",ptr+2); 
  	    	printf(" The address of A[2][2]=%d\n",ptr+3);	
}
