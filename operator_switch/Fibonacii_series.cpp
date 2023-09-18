#include<iostream>
using namespace std; 
int main()
{
    int n,i;
    cout<<"enter the number:";
    cin>>n;
    int a=0 , b=1;
    cout<<a<<endl<<b<<endl;
    for (int i = 2; i <n; i++)
    {
        int c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    
}