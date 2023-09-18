#include<iostream>
using namespace std;
// // public to public
// class animal{
//  public:
//  int age;

// };
// class dog : public animal
// {

// };
// int main(){
//     dog d1;
//     d1.age=18;
//     cout<<d1.age;
// }

// // public to protected
//   class animal{
//      public:
//      int age=18;
//   };
//    class dog : protected animal{
//     public:
//     void print(){
        
//         cout<<this->age;
//     }
//    };
//    int main(){
//     dog d1;
//     d1.print();
//    }
    //public to protected
    class animal{
        public:
        int age=18;
    };
    class dog:private animal{
        public:
        void print()
        {
        cout<<this->age;
        }
    };
    int main(){
        dog d1;
        d1.print();
    }
