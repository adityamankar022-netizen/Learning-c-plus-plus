#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class opp{
    int kg,gm;
    public:opp(int k, int g){
        kg=k;
        gm=g;
    }
    void operator+(opp &obj){
        kg = kg+obj.kg;
        gm = gm+obj.gm;
        cout<<"kg = "<<kg<<"\n";
        cout<<"gm = "<<gm<<"\n";
    }
};
int main()
{
    opp obj1(2,300);
    opp obj2(3,400);
    obj1+obj2;
}
