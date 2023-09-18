#include<iostream>
using namespace std;
class Animal{
   private:
   int age;
   public:
   int weight;
    //simple constructor called
    Animal(){
        cout<<"simple Constructor called"<<endl;
    }
    // Destructor called
    ~Animal(){
    cout<<"Destructor called:"<<endl;
    }
};
int main(){
    //static Allocation
    //cout<<"create a1"<<endl;;
    Animal ass;
    ass.weight;
    //Dynamic Allocation
   // cout<<"create b"<<endl;
    Animal*b=new Animal;
    delete b;
}