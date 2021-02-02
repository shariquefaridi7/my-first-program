/*
 Multiply Two dimensional matrix in c language
 */
 
 #include<stdio.h>
 void main()
 {
 	int a[2][3],b[3][2],i,j,k,sum=0,c[i][j];
 	printf("--------------------Enter the value of  A matrix-------------------------- \n");
 	
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 		 printf("Enter the value of matrix A[%d][%d] = ",i,j);
		  scanf("%d",&a[i][j]);	
		}
 		
	}
	printf("--------------------Enter the value of B matrix------------------------------\n");
	
	for(i=0;i<3;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 		 printf("Enter the value of matrix A[%d][%d] =  ",i,j);
		  scanf("%d",&b[i][j]);	
		}	
	}
	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			for(k=0;k<3;k++)
 			{
 				sum=a[i][k]*b[k][j] + sum;
 				
			}
		 c[i][j]=sum ;
		 sum=0;
		 }
		 
    }
    	printf("-------------------- The value of  A matrix-------------------------- \n");
    	
    	for(i=0;i<2;i++)
 	{
 		for(j=0;j<3;j++)
 		{
 		   printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    
    	printf("------------------- The value of B matrix-------------------------- \n");
    	
    	for(i=0;i<3;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 		    printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    printf("---------------------------Multiply of two  matrix-------------------------------");
    
		for(i=0;i<2;i++)
	{ 
 		for(j=0;j<2;j++)
        {
 	    	printf("\t\t%d",c[i][j]);
    	}
          printf("\n"); 	
 	
    }
 }
