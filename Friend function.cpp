#include <iostream>
using namespace std;
class Anurag;
class Shobhit
{
    int marks;
    public:void get (int m)
    {
        marks=m;
    }
    friend void student (Shobhit,Anurag);
};
class Anurag
{
    int marks;
    public:void get (int m)
    {
        marks=m;
    }
    friend void student (Shobhit,Anurag);
};
void student(Shobhit s,Anurag a)
{
    cout<<"Shobhit="<<s.marks<<"\n";
    cout<<"Anurag="<<a.marks;
}
int main()
{
    Shobhit obj1;
    obj1.get(87);
    Anurag obj2;
    obj2.get(67);
    student(obj1,obj2);
}
