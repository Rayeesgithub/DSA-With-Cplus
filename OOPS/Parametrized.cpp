#include<iostream>
using namespace std;
class student{
private:
int weight;
public:
int age;
 student(int age)
 {
    this->age=age;
    cout<<"parmetrized constructor called"<<endl;
 }
 student(int age ,int weight)
 {
   this->age=age;
   this->weight=weight;
   cout<<"paramertized constructor2 called"<<endl;
 }
    
};
int main(){
   student s(10);
    student*b=new student(100,10);
}