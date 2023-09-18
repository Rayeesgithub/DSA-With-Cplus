#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
      cout<<"Eating"<<endl;
    }
};
 class Dog:public Animal{
    public:
    void bark(){
        cout<<"Dogs are Barking"<<endl;
    }
 };
 class Babydog:public Dog
 {public:
    void weep(){
        
        cout<<"Baby dog rae wepping"<<endl;
    }

 };
  
 int main(){
    Babydog obj;
    obj.eat();
    obj.bark();
    obj.weep();
 }