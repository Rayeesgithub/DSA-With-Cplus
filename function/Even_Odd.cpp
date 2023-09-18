#include<iostream>
using namespace std;
bool checkeven(int n){
  
    if (n%2==0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    int geteven=checkeven(n);
    if (geteven=checkeven(n))
    {
       cout<<"this is even Number";
    }
    else{
        cout<<"this is odd number";
    }
}








