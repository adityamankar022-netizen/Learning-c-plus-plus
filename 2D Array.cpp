#include <iostream>
using namespace std;



int main()
{

    //2 D array
    /*

int arr[2][3]={1,3,5,79,3,2};
for(int r=0;r<2;r++)
{
for(int c=0;c<3;c++)
{
cout<<arr[r][c]<<"\t";
}
cout<<"\n";
}

*/

//3 D array

int arr[2][2][3]={1,3,5,79,3,2,1,3,52,3,5,2};
for(int t=0;t<2;t++)
{
   for(int r=0;r<2;r++)
   {
       for(int c=0;c<2;r++)
       {
           cout<<arr[t][r][c]<<"\t";
       }
       cout<<"\n";
   }
   cout<<"\n";
}


}
