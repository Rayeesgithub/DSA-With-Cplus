#include<iostream>
using namespace std;
class student{
    private:
    int weight;
    public:
    int rollno;
    student() 
          {   
           //this->weight=0;  
           
               cout << "Default constructor called" << endl;
          }
          
};
int main(){
    student s1;
    student*b=new student();
}