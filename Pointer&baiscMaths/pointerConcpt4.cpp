#include<iostream>
using namespace std;
int main(){
    int arr[6]={12,44,66,88};
    int i=0;
    cout<<"arr[i]:"<<arr[i]<<endl;
    cout<<"i[arr]:"<<i[arr]<<endl;
    cout<<"*(arr+i):"<<*(arr+i)<<endl;
    cout<<"*(i+arr):"<<*(i+arr)<<endl;

}