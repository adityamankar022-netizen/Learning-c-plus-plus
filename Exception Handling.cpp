#include <iostream>
using namespace std;
int main()
{
    int n=100;
    int v;
    cout<<"Enter any value";
    cin>>v;
    try
    {
        if(v==0)
        {
            throw v;
        }
        cout<<n/v;
    }
    catch(...) //Universal Exception Handling
    {
        cout<<"!!! Server Down !!!";
    }
   /* catch(int i)
    {
        cout<<"Invalid input";
    }
    catch(double i)
    {
        cout<<"double not allowed";
    }
    catch(const char *e)
    {
        cout<<"Char not allowed";
    }
    */
    cout<<"\nSuccessfully completed";

}
