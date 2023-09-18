#include<iostream>
using namespace std;
class student{
    private:
    int x;
    int*y;
    int z;
    public:
    student(){
        y=new int;
    }
    void setData(int a,int b,int c){
        x=a;
        *y=b;
        z=c;

    }
    void showData(){
        cout<<"The value of x is:"<<x<<endl;
        cout<<"The value of y is:"<<*y<<endl;
        cout<<"The value of c is:"<<z<<endl;
    }
    // deep copy
    student(student &raja){
        x=raja.x;
       y=new int;
        *y=*(raja.y);
        z=raja.z;
    }
};
int main(){
    student obj1,obj2;
    obj1.setData(12,24,36);
    obj1.showData();
    obj2=obj1;
    return 0;
}