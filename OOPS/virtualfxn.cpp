#include<iostream>
using namespace std;
class Animal{
   public:
   virtual void speak(){
    cout<<"speaking"<<endl;
   }
   
};
class Dog:public Animal{
    public:
    void speak(){
      cout<<"barking"<<endl;  
    }
   };
   int main(){
     Animal * obj=new Dog();
     obj->speak();
    

   }