/*
 find prime number b/t two any numbers
 */
 #include<stdio.h>
 
 void main()
 {
 	int a=10,b=30,i,j;
 	printf("%d,%d\n",a,b);
	
	for(i=a+1;i<=b-1;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
			   break;
			}
		}
		if(i==j)
		{
		
	     	printf("%d\t",i);
		
     	}
		
	} 
	 
	 
} 
