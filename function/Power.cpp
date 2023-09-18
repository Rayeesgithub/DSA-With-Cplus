#include<iostream>
using namespace std;
int power(int a,int b){
int result=1;
for (int i = 1; i <=b; i++)
{
    result=result*a;
}

    return result;
    
}
int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>a>>b;
    int ans=power(a,b);
    cout<<ans<<endl;
    return 0;
}