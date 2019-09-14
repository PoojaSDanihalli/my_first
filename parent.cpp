#include<iostream>
using namespace std;
class Parent
{
	protected:
	int id_protected;
};
class Child:public Parent
{
public:
void setId(int id)
{
	id_protected=id;
}
