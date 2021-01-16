 /*
 the sum of digit of a number in c language
 */
 #include<stdio.h>
 void main()
 {
 	int a,r,s=0;
 	printf("Enter the value of a = ");
 	scanf("%d",&a);
 	
 	while(a>0)
 	{ 
 	  r=a%10;
	   s=s+r;
	   a=a/10;                                                                                                                                                                      	
	 }
	 printf("sum of digit = %d",s);
	 
 } 
