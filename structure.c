/*
structure in c language
*/
#include<stdio.h>
#include<string.h>

void main()
{
	struct student
	{
		char name[10];
		int  Roll_No;
		int  class;
		float percentage;
		
	};
	struct student s1;
	
    printf("Enter the Name,Roll No,class , percentage =  ");	
	scanf("%s%d%d%f",s1.name,&s1.Roll_No,&s1.class,&s1.percentage);
	
	printf("\nFirst Student Name = %s\n",s1.name);
	printf("First Student Roll_No = %d\n",s1.Roll_No);
	printf("First Student class = %d\n",s1.class);
	printf("First Student percentage = %0.2f",s1.percentage);

	struct student s2;
	
	 printf("\nEnter the Name,Roll No,class , percentage =  ");	
	scanf("%s%d%d%f",s2.name,&s2.Roll_No,&s2.class,&s2.percentage);
	
	printf("\n Second Student Name = %s\n",s2.name);
	printf("Second Student Roll_No = %d\n",s2.Roll_No);
	printf("Second Student class = %d\n",s2.class);
	printf("Second Student percentage = %0.2f\n",s2.percentage);
}
	
