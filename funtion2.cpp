
#include <iostream>
using namespace std;
/*class sub
{

   int a,b;

   public:void  sum()
   {
       a=90;
       b=90;
       cout<<"result="<<a+b;

   }
   };
    int main()
    {
        sub s;
        s.sum();

    }
    */

class sub
{
    int a,b;
    public:void sum();
    void div();
    void minu();
    void mod();

};
void sub::sum()
{
a=90;
b=90;
cout<<"result="<<a+b<<"\n";
}
void sub::div()
{
a=90;
b=90;
cout<<"result="<<a/b<<"\n";
}
void sub::minu()
{
a=90;
b=90;
cout<<"result="<<a-b<<"\n";
}
void sub::mod()
{
a=90;
b=90;
cout<<"result="<<a%b;
}

int main()
{
    sub diid;
    diid.sum();
    diid.div();
    diid.minu();
    diid.mod();


}
