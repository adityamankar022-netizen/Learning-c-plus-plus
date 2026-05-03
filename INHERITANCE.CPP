#include <iostream>
using namespace std;
class hello
{
    int a;
    public:hello()
    {
        cout<<"active\n";
    }
    ~hello()
    {
        cout<<"\n memory released\n";
    }
    void display()
    {
        cout<<"welcome \n";
    }
    void show()
    {
        cout<<"\n bye bye \n";
    }
};
int main()
{
    hello h;
    h.display();

}
