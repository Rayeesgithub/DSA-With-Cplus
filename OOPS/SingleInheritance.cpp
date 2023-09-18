#include<iostream>
using namespace std;
//base class
class Animal{
    public:
   void eat(){
    cout<<"Animal Eating"<<endl;
   }
};
//Derived class
class Dog:public Animal{
    public:
    void bark(){
        
        cout<<"Dogs are Barking"<<endl;
    }

};
int main(){
    Dog d1;
    d1.eat();
    d1.bark();

}
