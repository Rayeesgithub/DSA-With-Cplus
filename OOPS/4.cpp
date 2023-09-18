#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int rollno;
    public:
    string getname(){
        return name;
    }
    void setname( string name){
        this->name=name;
    }
    int getrollno(){
        return rollno;
    }
    void setrollno(int rollno){
        this->rollno=rollno;
    }
};
int main(){
    student obj;
    obj.setname("rayees");
    obj.setrollno(121);

    cout<<"student nam,e is:"<<obj.getname()<<endl;
    cout<<"student roll:"<<obj.getrollno();
}