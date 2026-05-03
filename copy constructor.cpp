#include<iostream>
using namespace std;
class RBI
{
    int amount;
    int balance;
    public:RBI()
    {
        amount=10000;

    }
    RBI (RBI &obj)
    {
        balance=obj.amount;
        cout<<"balance="<<balance<<"\n";

    }
};
int main()
{


RBI sbi;
RBI pnb(sbi);
}
