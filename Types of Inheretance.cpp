/*
 Types of inheretance in c++.
 
 Four types of inheretance .
 
 1.single inheretance.
 2.multilevel inheretance.
 3.multiple inheretance.
 4.hieraarchical inheretance.
*/

#include<iostream>

using namespace std;

//single inheretance
/*
class A
{

		protected:
				int a,b;
				public:
			void input() 
			{
				cout<<"enter the value of a = "<<endl;
				cin>>a;                                              
				cout<<"enter the value of b = "<<endl;
				cin>>b;
			
			}
};
class B: public A
{
	
	public :                                    
		void output()
		{
			cout<<"sum of two no = "<<a+b;
		}
	
};
int main()
{
    	B add;
	add.input();
    add.output();
    return 0;
    
}*/

// multilevel inheretance
/*
class A
{

		protected:
				int a,b;
				public:
			void input() 
			{
				cout<<"enter the value of a = ";
				cin>>a;                                              
				cout<<"enter the value of b = ";
				cin>>b;
			
			}
};
class B: public A
{
	protected :
		int c,d;
		
	public :                                    
		void output()
		{
			cout<<"sum of two no = "<<a+b<<endl;
		}
		void sub_intput()
		{
			cout<<"enter the value of c = ";
			cin >>c;
			cout<<"enter the value of d = ";
			cin>>d;
		}
};

class C : public B
{
public:
	void sub_output()
	{
	cout<<"subtract of two no. = "<<c-d;	
	}
};

int main()
{
	C sub;
	sub.input();
	sub.output();
	sub.sub_intput();
	sub.sub_output();
	return 0;
}
*/

//multiple inheretance
/*
class A
{

	protected:
				int a,b;
				public:
			void input() 
			{
				cout<<"enter the value of a = ";
				cin>>a;                                              
				cout<<"enter the value of b = ";
				cin>>b;
			
			}
};
class B
{
	protected :
		int c,d;
		public:
		
		void input()
		{
			cout<<"enter the value of c = ";
			cin >>c;
			cout<<"enter the value of d = ";
			cin>>d;
		}
};
class C:public A,public B
{ 

	public:
		void add_output()
		{
			cout<<"sum of two no = "<<a+b<<endl;
		}
		
	   void sub_output()
	{
	cout<<"subtract of two no. = "<<c-d<<endl;	
	}
		
};

   int main()
{
	C obb;
	obb.A::input();
	obb.add_output();
	obb.B::input();
	obb.sub_output();
	return 0;
		
}
*/

// hierarchical inheretance
class A
{

	protected:
				int a,b;
				public:
			void input() 
			{
				cout<<"enter the value of a = ";
				cin>>a;                                              
				cout<<"enter the value of b = ";
				cin>>b;
			
			}
};
class B:public A
{

		public:
		
		void add_output()
		{
			cout<<"sum of two no. = "<<a+b<<endl;
		}
};
class C:public A
{ 

	public:
		void sub_output()
		{
			cout<<"sum of two no = "<<a-b<<endl;
		}
};
int main()
{
	B obb;
	obb.input();
	obb.add_output();
	C abb;
	abb.input();
	abb.sub_output();
	return 0;
}
























