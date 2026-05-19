#include <iostream>
using namespace std;
int main(){
  /*  for(int i=2;i<=10;i++){
        for(int j=1; j<=10; j++){
            cout<<i*j<<" ";
        }
        cout<<endl;

    }5
    PATTERN=-=-=-=-=-

 //Right Angle Triangle:-

 for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
        if(col<=row){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }
  //inverted Left Angle Triangle:-
  for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
        if(col>=row){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }

  //Left Angle Triangle:-
   for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
        if(col>=6-row){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }

  //inverted Right Angle Triangle:-
   for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
        if(col<=6-row){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }
  //Pyramid:-
   for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
        if(col>=6-row){
            cout<<" *";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }*/
  for(int row=1;row<=5;row++){
    for(int col=1;col<=5;col++){
        if(col<=row){
            cout<<row;
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }
}
