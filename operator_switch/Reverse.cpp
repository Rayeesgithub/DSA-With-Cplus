#include<iostream>
using namespace std;
int main()
{
    int n,reverse,rem;
    cout<<"Enter the number:";
    cin>>n;
   while(n>0)
    {
        rem=n%10;
       /* reverse=reverse*10+rem; */
        cout<<rem;
       n=n/10;
    }
    
}