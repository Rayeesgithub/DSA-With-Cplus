#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
using namespace std;
class Bird{
    public:
    virtual void eat()=0;
    virtual void fly()=0;
};
class sparrow:public Bird{
    void eat(){
        cout<<"sparrow is eating"<<endl;
    }
    void fly(){
        cout<<"sparrow is flying"<<endl;
    }
};
 class eagle:public Bird{
     void eat(){
        cout<<"Eagle is eating"<<endl;
    }
    void fly(){
        cout<<"Eagle is flying"<<endl;
    }
 };
 #endif;