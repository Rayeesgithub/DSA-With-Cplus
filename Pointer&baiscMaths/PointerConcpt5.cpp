#include<iostream>
using namespace std;
int main(){
    int arr[10]={5,6,7,8};
    int *p=arr;
    int *q=arr+1;
    cout<<"arr:"<<arr<<endl;
    cout<<"&arr:"<<&arr<<endl;
    cout<<"arr[0]:"<<arr[0]<<endl;
      cout<<"&arr[0]:"<<&arr[0]<<endl;
      cout<<"p:"<<p<<endl;
      cout<<"&p:"<<&p<<endl;
      cout<<"*p:"<<*p<<endl;
      cout<<"q:"<<q<<endl;
      cout<<"*q:"<<*q<<endl;
      cout<<"*(p)+2:"<<*(p)+2<<endl;
      cout<<"*(q)+3:"<<*(q)+3<<endl;
      cout<<"sizeof(arr):"<<sizeof(arr)<<endl;// space taken by array
      cout<<"sizeof(p):"<<sizeof(p)<<endl; // space taken by pointerr
      cout<<"sizeof(*p):"<<sizeof(*p)<<endl;


}