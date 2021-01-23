#include<iostream>
using namespace std;
class A{
public:
	int a;
	void seta(int x)
	{
		a=x;
	}
	void showa()
	{
		cout<<a<<endl;
	}	

};
int main()
{
	A m;
	m.seta(100);
	m.showa();
	cout<<"hello world"<<endl;
	return 0;
}

