 /*
 find leap year and non-leap year in c language 
 */
 #include<stdio.h>
 
 void main()
 {
 	int year;
 	printf("enter the year = ");
 	  scanf("%d",&year);
 	  
 	if(year%400==0)
    {
 		printf("this year is leap year\n");        // this statement is taken when year is cencury year
 		
	 }
	 else 
	  if(year%100==0)
	 {
	 	printf("this year is not leap year\n");
	 }	
	  
	  else
	   if(year%4==0)
 	{
 		printf("this year is leap year\n");        // this statement is taken when year is non- century year
 		
	 }
 	else
 	{
 		printf("this year is not leap year\n");	
	 }
 }

