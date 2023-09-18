#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=5;
    int *ptr=&a;
    cout<<a<<endl;
    cout<<"address of a:"<<&a<<endl;
    cout<<"address of b:"<<&b<<endl;
    cout<<"value stored at ptr:"<<ptr<<endl;
    cout<<"address of ptr:"<<&ptr<<endl;
    cout<<"value stored pointing to is:"<<*ptr<<endl;
     char ch='b';
     char*c=&ch;
     double dtr=5.003;
     double *d=&dtr;
     cout<<"size of ptr is:"<<sizeof(ptr)<<endl;
     cout<<"size of c is:"<<sizeof(c)<<endl;
     cout<<"size of d is :"<<sizeof(d)<<endl;

}