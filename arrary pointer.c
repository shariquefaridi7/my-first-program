/*
  array pointer in one dimensional in c language 
  */
  #include<stdio.h>
  
  void main()
  {
  	int A[3],i;
  	printf(" ------------------The value of  A----------------------------\n ");
  	
  	for(i=0;i<3;i++)
  	{
	  
  	printf("Enter the value of A[%d] = ",i+1);
  	scanf("%d",&A[i]);
	}
  	printf("-----------------------------------------------------\n");
  	
  	printf(" The value of A[1]=%d\n",*A);
     	printf(" The value of A[2]=%d\n",*A+1);
  	    	printf(" the value of A[3]=%d\n",*A+2); 
  	    	printf("-----------------------------------------------\n");
  	    	
  	    	
  		printf(" The address of A[1]=%d\n",A);
  		printf(" The address of A[2]=%d\n",A+1);
  		printf(" The address of A[3]=%d\n",A+2);
  	printf("-----------------------------------------------------------\n");
  	
	    printf(" The addrees of A[1]=%d\n",&A[0]);
	      printf(" The addrees of A[2]=%d\n",&A[1]);
	      printf(" The addrees of A[3]=%d",&A[2]);	 
	      
  }  
  
