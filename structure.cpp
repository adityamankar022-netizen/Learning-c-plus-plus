
#include <iostream>
using namespace std;
//access specifiers
//public

//1. Single Inheritence

class A{ //base / parent class
 public:
     int a=10;

 };

 class B: public A{
   public:
       int a=10

 };





struct student{

int a=10;

void show (){
cout<<"Hello";
}

};

int main(){

student obj;
cout<<obj.a<<endl;
obj.show();

}



