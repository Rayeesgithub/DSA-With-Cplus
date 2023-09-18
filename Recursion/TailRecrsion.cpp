#include<iostream>
using namespace std;
void print(int n){
  // base class
  if(n==0)
  return ;
  // process 
  cout<<n<<"  ";
  // recursive call
  print(n-1);
}
int main(){
    int n;
    cout<<"enter the number where from print:";
    cin>>n;
   print(n);
}