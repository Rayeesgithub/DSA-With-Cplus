#include<iostream>
using namespace std;
void printDigit(int n){
 //base case
 if (n==0)
 {
    return ;
 }
 
  printDigit(n / 10);
  int num=n%10;
 cout<<num<<" ";
}
int main(){
    int n;
    cout<<"enter the Number:";
    cin>>n;
    
    if (n==0)
    {
        cout<<0;
    }
    printDigit(n);
}