#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void show()=0;

};
 class Dog:public Animal{
public:
 void show(){
    cout<<"Dog is barking "<<endl;
 }
  
 };
 int main(){
    Animal *a=new Dog();
    a->show();
 }
