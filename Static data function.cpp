#include <iostream>
using namespace std;
class bank
{
    static int a;
    public:static void show()
    {
        cout<<"a="<<++a<<"\n";
    }
};
int bank::a;
int main()
{
    bank::show();
    bank::show();
}
