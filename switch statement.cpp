/*
switch statment in c++
*/

#include<iostream>
using namespace std;

int main()
{
  while(1)
  {
  
	int a,b,c,choice;
	cout<<"\n\n1.Addition";
	cout<<"\n2.Subtract";
	cout<<"\n3.multiply";
	cout<<"\n4.division";
	cout<<"\n5.exit";
   cout<<"\nenter the value of choice = ";
   cin>>choice;
   
   switch(choice)
   {
   case 1: cout<< "enter the value of a = ";
          cin>>a;
         cout<< "enter the value of b= ";
          cin>>b;
         c=a+b;
          cout<< "enter the value of c= "<<c;
          
		 break;
		 
    case 2 :  cout<< "enter the value of a = ";
          cin>>a;
         cout<< "enter the value of b= ";
          cin>>b;
         c=a-b;
          cout<< "enter the value of c= "<<c;
          
         break;
         
    case 3 :  cout<< "enter the value of a = ";
          cin>>a;
         cout<< "enter the value of b= ";
          cin>>b;
         c=a*b;
          cout<< "enter the value of c= "<<c;
          
         break;
         
    case 4 :  cout<< "enter the value of a = ";
          cin>>a;
         cout<< "enter the value of b= ";
          cin>>b;
         c=a/b;
          cout<< "enter the value of c= "<<c;
          
         break;
     case 5 : exit(0);
         
         default:printf("\nchoice is invalid\n");
		 }
		 
		 }
		 
   
	
}
