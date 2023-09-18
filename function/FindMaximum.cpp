#include<iostream>
using namespace std;
int getmaximum(int a , int b)
{
if (a>b)
{
   return a ;
}
else 
{
   return b;
}


}

int main()
{
    int a,b;
    cout<<"Enter the Number";
    cin>>a>>b;
    int maxi= getmaximum(a,b);
    cout<<"maximum:" <<maxi;
}
