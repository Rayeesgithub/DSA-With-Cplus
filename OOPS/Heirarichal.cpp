#include<iostream>
using namespace std;
class Car{
  public:
  string name;
  int carno;
  void test(){
     cout<<"Before buy car test "<<endl;
  }
 
};
class Scorpio:public Car{
    public:
    // create constructor
   void white(){
    cout<<"white scorpio looks very good"<<endl;
   }
};
class fortuner:public Car{
    public:
  void cost(){
    cout<<" Fortuner is one of the costly car"<<endl;
  }
};
int main(){
 Scorpio s11;
   s11.test();
   s11.white();
   fortuner f101;
   f101.cost();

}
// // C++ program to demonstrate hierarchical inheritance

// #include <iostream>
// using namespace std;

// // base class
// class Animal {
//    public:
//     void info() {
//         cout << "some animal are pet" << endl;
//     }
// };

// // derived class 1
// class Dog : public Animal {
//    public:
//     void bark() {
//         cout << "Dogs are barking in night" << endl;
//     }
// };

// // derived class 2
// class Cat : public Animal {
//    public:
//     void meow() {
//         cout << "Cat are pet & friendly Animal" << endl;
//     }
// };

// int main() {
//     // Create object of Dog class
//     Dog dog1;
//     cout << "Dog Class:" << endl;
//     dog1.info();  // Parent Class function
//     dog1.bark();

    // Create object of Cat class
//     Cat cat1;
//     cout << "\nCat Class:" << endl;
//     cat1.meow();

//     return 0;
// }
