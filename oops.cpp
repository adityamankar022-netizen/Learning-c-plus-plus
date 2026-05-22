#include <iostream>
using namespace std;

/*four pillars of oops

1 - Enc


class student{
string name="raj";
int rollno=101;

public:
    void show(){
    cout<<"name is ="<<name<<endl<<"rollno is ="<<rollno;
    }
};

*/


class student {
    string name;
    int rollno;
public:
    student(){
    cout<<"Hello";
    }

    student(string stname,int strollno){ //constructor

    name = stname;
    rollno = strollno;
    }

    void show(){
    cout<<"hello"<<name<<endl<<"your roll no. is"<<rollno<<endl;

    }

};

int main(){

student obj3;
student obj1("raj",103);
student obj2("rahul",1003);
obj1.show();
obj2.show();
obj3.show();

}
