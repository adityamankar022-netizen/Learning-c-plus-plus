#include <iostream>
using namespace std;
int main(){

int num=5;
int fi=0,se=1;
cout<<fi<<" "<<se<<" ";
for(int i =1; i<=num-1;i++){
    int nx=fi+se;
    fi=se;
    se=nx;
    cout<<nx<<" ";
}
/*
//HFC
int a,b,hcf;
cout<<"Enter  a First no.";
cin>>a;
cout<<"Enter  a Sec no.";
cin>>b;
int min= (a<b)?a:b;
for(int i=1 ; i<=min ;i++)
{
    if (a%i==0 && b%i==0){
        hcf=i;
    }
}
cout<<hcf;
*/

//LCF



}
