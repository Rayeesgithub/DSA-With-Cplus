#include<iostream>
using namespace std;
void print(int arr[],int n,int i){
    // base case
    if (i>=n)
    {
        return;
    }
    // 1 case solve kar diya
    cout<<arr[i]<<" ";
    // baki sabh reursion sambhal lega
    print(arr,n,i+1);
}
int main(){
    int n=5;
    int arr[5]={10,20,30,40,50};
    int i=0;
    print(arr,n,i);
}