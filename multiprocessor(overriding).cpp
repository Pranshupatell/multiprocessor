#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
		void pranshu()
		{
			cout<<"my name is Pranshu"<<endl;
		}
};

class B : public A
{ 
    public :
    void pranshu()
	{
	 cout<<"institute name is rnw"<<endl;	
	}	
};
int main()
{
	B b;
	
	b.A::pranshu();
	b.pranshu();
	return 0;
}
