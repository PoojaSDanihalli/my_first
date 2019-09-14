#include<iostream>
using namespace std;
int sq(int x)
{
return x*x;
}
double sq(double y)
{
return y*y;
}
int main()
{
cout<<"Square 7: "<<sq(7)<<endl<<"Square 7.5: "<<sq(7.5)<<endl;
}
