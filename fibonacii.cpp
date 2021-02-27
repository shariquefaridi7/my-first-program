#include<iostream>
using namespace std;

int main()
{
	int i,a=0,b=1,c;
	for(i=0;i<=10;i++)
	{
	 c=a+b;
	 cout<<c<<endl;
	 a=b;
	 b=c;
    }
    return 0;
	
}
