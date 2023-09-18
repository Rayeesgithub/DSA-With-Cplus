#include<iostream>
using namespace std;
 void count(int n){
    // base class
    if(n==0)
    return ;
    //recusive condition
    count(n-1);
    // processing
   cout<<n<<" ";

 }
 int main(){
    int n;
    cout<<"Enter the number where from you print:";
    cin>>n;
    count(n);
 }