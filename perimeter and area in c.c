/*
find perimeter and area of rectangluar  in c language
*/
#include<stdio.h>

void main()
{
	float a,b,perimeter,area;
	
	  printf("the length of rectangle a = ");
     	scanf("%f",&a);
	
	   printf("the breath of rectangle b = ");
	    scanf("%f",&b);
	
    	perimeter=2*(a+b);       //perimeter of rectangle =2(a+b)
      	printf("the perimeter of rectangle = %0.2f\n",perimeter);
	
        	area=a*b;       //area of rectangle =a*b
        	printf("the area of rectangle = %0.2f",area);

	
}
