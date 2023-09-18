#include<iostream>
using namespace std;
class Animal{
    protected:
    int age=18;
};
// // protected to public
// class dog:public Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
// };
// int main(){
//     dog d1;
//     d1.print();
// }
   //  protected to protected
//    class dog:protected Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
//    };
//    int main(){
//     dog d1;
//     d1.print();
//    }

// protected to private
// class dog:private Animal{
//     public:
//     void print(){
//         cout<<this->age;
//     }
//    };
//    int main(){
//     dog d1;
//     d1.print();
//    }

  //private to public,protected,private all case not inherit(no acesss)
  class Animal:
  {
    private:
    int age=18;
};

class dog:public Animal{
    public:
    void print(){
        cout<<this->age;
    }
};
int main(){
    dog d1;
    d1.print();
}