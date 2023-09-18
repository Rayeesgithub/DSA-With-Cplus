#include<iostream>
using namespace std;
class Maths{
    public:
   int sum(int a,int b){
    cout<<"i am first:"<<endl;
    return a+b;
   }
   int sum(int a,int b,int c){
    cout<<"I am second:"<<endl;
    return a+b+c;
   }
   int sum(int a,float b){
    cout<<"i am third:"<<endl;
    return a+b;
   }
};
int main(){
    Maths obj;
    cout<<obj.sum(10,5)<<endl;
    cout<<obj.sum(10,20,30)<<endl;
    cout<<obj.sum(10,12.5f)<<endl;
}