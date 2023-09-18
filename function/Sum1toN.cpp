#include<iostream>
using namespace std;
int getsum(int n)
{
    int sum=0;
    for ( int i = 1; i <= n; i++)
    {
       
       sum=sum=sum+i;
    }
    return sum ;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int ans=getsum(n);
    cout<<ans<<endl;
    return 0;
}