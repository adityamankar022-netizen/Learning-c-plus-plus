#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
//single dimension array
//datatype arrayname[size];//subscript
/*
int arr[5];
arr[0]=48;
arr[1]=40;
arr[2]=41;
arr[3]=42;
arr[4]=48;
arr[4]=arr[4]+10; //Updating
cout<<arr[4]+10<<"\n";//non Updating
cout<<arr[4]<<"\n";
cout<<arr[1]+arr[2];
int arr1[]={20,30,40,50,60};
cout<<arr[2]<<"\n";


//Input

int subject[3];
for (int i=0;i<3;i++)
{
cout<<"Enter value for "<<i<<" position:- ";
cin>>subject[i];
}
cout<<"\n";

//Output

cout<<"Value of the Array\n";
cout<<"\n";
for(int i=0;i<3;i++)
{
cout<<"The value for "<<i<<" position:- "<<subject[i]<<"\n";
}



// Count

int subject[]={10,70,84,62,95};
int len=sizeof(subject)/sizeof(subject[0]);
cout<<len;

for (int i=0;i<len;i++)
{
cout<<"Enter value for "<<i<<" position:- ";
cin>>subject[i];
}
cout<<"\n";

//Output
cout<<"Value of the Array\n";
cout<<"\n";
for(int i=0;i<len;i++)
{
cout<<"The value for "<<i<<" position:- "<<subject[i]<<"\n";
}

//Print Only Even Number

int arr[]={30,45,12,7,89,78,54};
int s;

s=sizeof(arr)/sizeof(arr[0]);
cout<<"length"<<s<<"\n";

for(int i=0;i<s;i++)
{
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<"\n";
        }

}

//Print Only odd Number

int arr[]={30,45,12,7,89,78,54};
int s;

s=sizeof(arr)/sizeof(arr[0]);
cout<<"length"<<s<<"\n";

for(int i=0;i<s;i++)
{
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<"\n";
        }

}

//Print Squre Number

int arr[]={30,45,12,7,89,78,54};
int s;

s=sizeof(arr)/sizeof(arr[0]);
cout<<"length= "<<s<<"\n";

for(int i=0;i<s;i++)
{
       cout<<arr[i]*arr[i]<<",\t";

}

//Print Cube Number

int arr[]={30,45,12,7,89,78,54};
int s;

s=sizeof(arr)/sizeof(arr[0]);
cout<<"length= "<<s<<"\n";

for(int i=0;i<s;i++)
{
       cout<<arr[i]*arr[i]*arr[i]<<",\t";

}


//Print Squre Number

int arr[]={30,45,12,7,89,78,54};
int s;

s=sizeof(arr)/sizeof(arr[0]);
cout<<"length= "<<s<<"\n";
int sum=0;

for(int i=0;i<s;i++)
{
    sum+=arr[i];
}
cout<<sum;


*/

//Descending

int arr[]={3,8,10,2,1,9};

int n=5;

sort(arr,arr+n,greater<int>());
for (int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

//Asending

int arr[]={3,8,10,2,1,9};

int n=5;

sort(arr,arr+n);
for (int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}



}
