#include<iostream>
using namespace std;
int min(int,int,int);
int main()
{
int x,y,z;
cout<<"enter 3 no:";
cin>>x>>y>>z;
cout<<"min is:"<<min(x,y,z)<<endl;
}
int min(int a,int b,int c)
{
int min;
min=a<b?(a<c?a:c):(b<c?b:c);
return min;

}

