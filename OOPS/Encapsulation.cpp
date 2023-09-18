#include<iostream>
using namespace std;
class student{
   private:
   int rollno;
   string name;
   public:
   int getrollno(){
    return rollno;
   }
   void setrollno(int rollno){
    this->rollno=rollno;
   }
   string getname(){
    return name;
   }
   void setname(string name){
    this->name=name;
   }
};
int main(){
    student obj;
   obj.setrollno(121);
    obj.setname("Rayees");
    cout<<"Student Name is:"<<obj.getname()<<endl;
    cout<<"Student rollno is:"<<obj.getrollno()<<endl;
}