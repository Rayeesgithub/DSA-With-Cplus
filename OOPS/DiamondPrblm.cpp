#include<iostream>
using namespace std;
class A{
    public:
    int Physics;
    // here make simple constructor
    A(){
        Physics=68;
    }
};
class B{
    public:
    int Physics;
    B(){
        Physics=99;
    }
};
class C: public A,public B{
    public:
    int maths;
    C(){
        maths=90;
    }
};
int main(){
    C obj;
    //obj.phyics karne amibigiuty erroe aaayega because phyisics name ka two function hai
    cout<<obj.A::Physics<<endl;
    cout<<obj.B::Physics<<endl;
    cout<<obj.maths<<endl;
}