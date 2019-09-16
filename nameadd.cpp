#include<iostream>
using namespace std;
class str
{
private:
string s;
public:
str(string s_1="")
{
s=s_1;
}

str operator + (str const &obj)
{
str add;
add.s=s+" "+obj.s;

return add;
}
void print()
{
cout<<s;
}
};


int main()
{
str s1("Pooja"),s2("S D");
str s3=s1+s2;
s3.print();


}
