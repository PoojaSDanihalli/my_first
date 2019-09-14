#include<iostream>
using namespace std;
class Player{
private:
int run;
int wicket;
public:
Player(int r,int w)
{
run=r;
wicket=w;
}
Player(const Player &p2)
{
run=p2.run;
wicket=0;
}
Player()
{
run=0;
wicket=0;
}
int getrun()
{
return run;
}
int getWicket()
{
return wicket;
}
};
int main()
{
Player p1(304,4),p2(305,78),p3(356,60);
Player p4=p1,p5=p2,p6=p3;
cout<<"Player 1"<<endl<<"Runs: "<<p1.getrun()<<" Wickets : "<<p1.getWicket()<<endl;
cout<<"Player 2"<<endl<<"Runs: "<<p2.getrun()<<" Wickets : "<<p2.getWicket()<<endl;
cout<<"Player 3"<<endl<<"Runs: "<<p3.getrun()<<" Wickets : "<<p3.getWicket()<<endl;
cout<<"Player 4"<<endl<<"Runs: "<<p4.getrun()<<" Wickets : "<<p4.getWicket()<<endl;
cout<<"Player 5"<<endl<<"Runs: "<<p5.getrun()<<" Wickets : "<<p5.getWicket()<<endl;
cout<<"Player 6"<<endl<<"Runs: "<<p6.getrun()<<" Wickets : "<<p6.getWicket()<<endl;
}
