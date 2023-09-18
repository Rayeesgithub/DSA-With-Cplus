// #include<iostream>
// using namespace std;
// class param{
//     public:
//     int value;
//     void operator+(param&obj2){
//          int value1=this->value;
//          int value2=obj2.value;
//          cout<<(value2-value1)<<endl;
//     }
// };
// int main(){
//     param obj1,obj2;
//     obj1.value=8;
//     obj2.value=12;
//   obj1+obj2;
//   return 0;
// }
#include <iostream>
using namespace std;

class Complex {
   private:
      int real;
      int imag;
   public:
      Complex(int r = 0, int i =0) {
         real = r;
         imag = i;
      }
      
      // Overloading the + operator
      Complex operator + (Complex const &obj) {
         Complex res;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res;
      }

      void print() {
         cout << real << " + i" << imag << endl;
      }
};

int main() {
   Complex c1(3, 4), c2(6, 7);
   Complex c3 = c1 + c2; // c3 = (3+6) + i(4+7)
   c3.print();
   return 0;
}
