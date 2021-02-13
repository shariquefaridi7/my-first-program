/*
class and object in c++
*/
#include<iostream>
using namespace std;

class add
{
	private:
    	int a,b,c;
	
	public:
		int input()
		{
			cout<<"enter the value of a = ";
			cin>>a;
			cout<<"enter the value of b = ";
			cin>>b;
	    }
	    int sum()
	    {
	       c=a+b;
	       cout<<"the sum of two no = "<<c;
	    }
};
int main()
{    add A1;
	
	A1.input();
	A1.sum();
	return 0;
}
