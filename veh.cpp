#include<iostream>
class veh
{
public:
	veh()
	{
	cout<<"this is a vehicle"<<endl;
	}
};
class fourwheeler
{
public:
	fourwheeler()
	{
	cout<<"this is a 4 wheeler"<<endl;
	}
};
class car:public veh,public fourwheeler{

};
int main()
{
car obj;
return 0;
}
