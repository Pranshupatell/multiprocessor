#include<iostream>
#include<string.h>
using namespace std;

class Member
{
	public :
		void set()
		{
		  cout<<"default value = 10"<<endl;	
		}
		void set(int n)
		{
			cout<<"1st parameterized value = "<<n<<endl;
		}
		void set(int n,int m)
		{
			cout<<"2nd parameterized values are = "<<n<<m<<endl;
		}
		void set(int n,int m,int o)
		{
			cout<<"3rd parameterized values are = "<<n<<m<<o<<endl;
		}
};
int main()
{
	Member x;
	x.set();
	x.set(20);
	x.set(30,40);
	x.set(50,60,70);
	return 0;
}
