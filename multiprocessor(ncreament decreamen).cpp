#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public :
		int x;
		
		void set(int n)
		{
			x=n;
		}
		void set()
		{
			cout<<"N = "<<x<<endl;
		}
		operator++(int)
		{
			return x++;
		}
};

class B
{
   public :
		int y;
		
		void set(int m)
		{
			y=m;
		}
		void set()
		{
			cout<<"M = "<<y<<endl;
		}
		operator--(int)
		{
			return y--;
		}	
};
int main()
{
	A x;
	x.set(10);
	x.set();
	x++;
	x.set();
	cout<<"--------------------------------"<<endl;
	B y;
	y.set(100);
	y.set();
	y--;
	y.set();
	
	return 0;
}
