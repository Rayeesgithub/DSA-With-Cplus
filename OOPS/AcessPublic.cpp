#include<iostream>
using namespace std;
class student{
   public:
   string name;
   int rollno;

};
int main(){
    student obj;
    obj.name="Rayees";
    obj.rollno=123;
    cout<<"student name is:"<<obj.name<<endl;
    cout<<"Stuident roll no is:"<<obj.rollno<<endl;
}