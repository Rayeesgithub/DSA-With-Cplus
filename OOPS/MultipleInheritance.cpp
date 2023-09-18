#include<iostream>
using namespace std;
class A{
    public:
  int Physics=85;

};
class B{
    public:
    int Chemestry;
    B(){
       Chemestry=92;
    }

};
class C:public A,public B
{
  public:
  int maths=99;
};
int main(){
     C obj;  
   cout<<obj.Physics<<endl<<obj.Chemestry<<endl<<obj.maths<<endl;
}