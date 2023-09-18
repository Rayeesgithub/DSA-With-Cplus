#include<iostream>
using namespace std;
class student{
    private:
    int x;
    int *y;
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
        cout<<"value of x is:"<<x<<endl;
        cout<<"value of y is:"<<*y<<endl;
        cout<<"value of z is:"<<z<<endl;
    }
};
int main(){
    student obj1,obj2;
    obj1.setData(10,20,30);
    obj1.showData();
    obj2=obj1;
    return 0;
}