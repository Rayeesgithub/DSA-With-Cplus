#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    int *q=p;
    int *r=q;
    cout<<"a:"<<a<<endl;
    cout<<"&a:"<<&a<<endl;
    cout<<"p:"<<p<<endl;
    cout<<"&p:"<<&p<<endl;
    cout<<"*p:"<<*p<<endl;
    cout<<"*p*2:"<<*p*2<<endl;
    cout<<"(*p++):"<<*p++<<endl;
    cout<<"++p:"<<++*p<<endl;
    cout<<"a+1:"<<a+1<<endl;
    cout<<"q:"<<q<<endl;
    cout<<"&q:"<<&q<<endl;
    cout<<"*q:"<<*q<<endl;
     cout <<"r:"<< r << endl; //address of a
        cout <<"&r:"<< &r << endl; //address of r
        cout <<"*r:"<< *r << endl; //5
         cout <<"(*p + *q + *r):" <<*p + *q + *r << endl; //15
}