#include<iostream>
using namespace std;
int main(){
    int arr[5]={12,14,16,18};
    cout<<"arr:"<<arr<<endl;
    cout<<"&arr:"<<&arr<<endl;
    cout<<"&arr[0]:"<<&arr[0]<<endl;
  cout<<"arr[0]:"<<arr[0]<<endl;
    cout<<"*arr:"<<*arr<<endl;
    cout<<"*arr+1:"<<*arr+1<<endl;
    cout<<"(*arr)+1:"<<(*arr)+1<<endl;
    cout<<"*(arr+1):"<<*(arr+1)<<endl;
    cout <<"arr[1]:" <<arr[1] << endl;
        cout <<"*(arr+2):" <<*(arr + 2) << endl;
        cout <<"arr[2]:" <<arr[2] << endl;
        cout <<"*arr(+3):" <<*(arr + 3) << endl;
        cout <<"arr[3]:" <<arr[3] << endl;
}