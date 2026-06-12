#include <iostream>
using namespace std;

void table(int num)
{

for(int i=1;i<=10;i++)
{
     cout << num << " x " << i << " = " << num*i<<"\n";
}


}


//Q.7 Write a function to display the table of any number.

int main()
{
int num;

    cout << "Enter number: ";
    cin >> num;

    table(num);
}
