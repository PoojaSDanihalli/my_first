#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int max(int,int,int);

int main()
{
	int a,b,c;
	cout<<"enter 3 integers:";
	cin>>a>>b>>c;
	cout<<"max is:"<<max(a,b,c)<<endl;
}
int max(int x,int y,int z)
{
	int max=x;
	if(y>max)
		max=y;
	if(z>max)
		max=z;
	return max;
}
