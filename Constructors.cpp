#include<iostream>
using namespace std;



//COSTRUCTOR
//defination :- it is used to allocatate the memory of an object
//it does't return any value
//tit is also called special function
//the function name is similar to a class name is costructor
//it is activated when the object of an class is created.
//there are 3 types of constructor
//1. Defalut constructor
//2. Parameterised constructor
//3. copy constuructor


//Example of defalut costructor
class joy
{
    public:joy()
    {
    cout<<"activated \n";
    }

    joy(int act)
    {
    cout<<"29999900rs";
    }
};

int main()
{
    joy j;
    joy o(3578);

}
