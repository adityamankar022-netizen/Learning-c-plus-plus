#include <iostream>
using namespace std;
class A
{
    public:void F1()
    {
        cout<<"Function 1\n";
    }
};
class B:public A
{
    public:void F2()
    {
        cout<<"Function 2\n";
    }
};
class C
{
    public:void F3()
    {
        cout<<"Function 3\n";
    }
};
class D:public C
{
    public:void F4()
    {
        cout<<"Function 4\n";
    }
};
class E:public D
{
    public:void F5()
    {
        cout<<"Function 5\n";
    }
};

class F:public E,public B
{
    public:void F6()
    {
        cout<<"Function 6\n";
    }
}F;
int main()
{
   F.F1();
   F.F2();
   F.F3();
   F.F4();
   F.F5();
   F.F6();
}

