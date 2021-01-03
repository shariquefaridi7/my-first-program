/*
array in c programm in two dimensinal
*/
#include<stdio.h>
 
 void main()
 {
 	
   int a[2][3],b[2][3], c[2][3] ,i,j;

 printf("-----enter the value of matrix A---------\n");
 
 for(i=0;i<2;i++)
 {
 for(j=0;j<3;j++)	
 {
 	printf("the value of matrix A[%d][%d]",i+1,j+1);
 	
	 scanf("%d",&a[i][j]); 	
 }
 	
 }
 printf("-----enter the value of matrix B---------\n");
 for(i=0;i<2;i++)
 {
 for(j=0;j<3;j++)	
 {
 	printf("the value of matrix B[%d][%d]",i+1,j+1);
 	
	 scanf("%d",&b[i][j]); 	
 }
 	
 }
 for(i=0;i<2;i++)
 {
 for(j=0;j<3;j++)
 {
   c[i][j]=a[i][j]+b[i][j];
  }
 
}
printf("----- the value of matrix A---------\n");
 
for(i=0;i<2;i++)
 {
 for(j=0;j<3;j++)	
 {
 	printf("\t%d",a[i][j]);
 	
 }
 printf("\n");
}
 
printf("----- the value of matrix B---------\n");
 
for(i=0;i<2;i++)
 {
 for(j=0;j<3;j++)	
 {
 	printf("\t%d",b[i][j]);
 	
 }
 printf("\n");
}
  printf("------sum of two number-------\n");
  for(i=0;i<2;i++)
 {
 for(j=0;j<3;j++)	
 {
 	printf("\t%d",c[i][j]);
 }
 	printf("\n");
}
 	
 }
