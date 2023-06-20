#include<iostream>
#include<string.h>
using namespace std;

class Message
{
  private :
  char n[100];
  
  public :
  void set(char m[])
  {
    strcpy(n,m);
  }	
  void get() 
  {
  	cout<<n<<endl;
  }
  void setter()
  {
  	char s[100]="Pranshu";
  	
  	cout<<n<<" "<<s<<endl;
  }
};
int main()
{
	Message m;
	m.set("my name is");
	m.setter();
	return 0;
}
