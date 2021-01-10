/*
find vowel words in c language
*/
#include<stdio.h>
 void main()
 {  
 
 
 
  char alphabet ,a,e,i,o,u;
  printf("enter the alphabet =  ");
   scanf("%c",&alphabet);
   
   if(alphabet=='a'||alphabet=='A'||alphabet=='E'||alphabet=='e'||alphabet=='i'||alphabet=='I'||alphabet=='O'||alphabet=='o')
   {
      printf("this is a vowel");
    }
    else
    {
    	printf("this is not a vowel");
	}

 }
