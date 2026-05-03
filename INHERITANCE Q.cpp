#include <iostream>
using namespace std
//----------------------Single--------------------------

class father
{
    int a,b;
    public:void sum()
    {
        a=10;
        b=90;
        cout<<"ans="<<a+b<<"\n";

    }

};
class child:public father
{
    int a,b;
    public:void mul()
    {
        a=45;
        b=23;
        cout<<"multiply="<<a*b<<"\n";
    }
};
int main()
{
    child c;
    c.mul();
    c.sum();



}
