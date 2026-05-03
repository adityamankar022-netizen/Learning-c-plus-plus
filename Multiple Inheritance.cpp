#include<iostream>
using namespace std;
class A
{
    public:void display()
    {
        cout<<"Class A\n";
    }
};
class B
{
    public:void show()
    {
        cout<<"Class B\n";
    }
};
class C:public A,public B
{
    public:void pass()
    {
        cout<<"Class C\n";
    }
};

int main()
{
    C obj;
    obj.display();
    obj.show();
    obj.pass();
}
