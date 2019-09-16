#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{ cout<<"constructing base"; }
		~base()
		{ cout<<"destructing base"; }
};
class derived:public base{
	public:
		derived()
		{ cout<<"constructing derived"; }
		~derived()
		{ cout<<"destructing derived"; }
};
int main(void)
{
	derived *d=new derived();
	base *b=d;
	delete b;
	//getchar();
	return 0;
}
