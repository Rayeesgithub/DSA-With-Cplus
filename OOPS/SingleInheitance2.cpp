#include<iostream>
using namespace std;
class A{
   int a=4;
   int b=5;
    public:
    int  Mul(){
    int c=a*b;
    //int d=a+b;
    return c;
    }

};
class B:private A{
    public:
    void display(){
        int ans=Mul();
        cout<<"multiplaction of a nad b is:"<<ans<<endl;
    }

};
int main(){
    B b1;
    b1.display();
}