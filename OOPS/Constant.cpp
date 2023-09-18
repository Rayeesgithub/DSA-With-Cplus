#include<iostream>
using namespace std;
class abc{
  int x;
  int *y;
  int z; 
  public:
  abc(int a,int b,int c=0){
    x=a;
    y=new int(b);
    z=c;
  }
  int getx()const{

   return x;
  } 
  void setx(int val) {
    x=val;
  }
  int gety() const {
   return *y;
  }
  void sety(int val){
     *y=val;
  }
  int getz()const{
    return z;
  }
 
};
void printABC(const abc &a){
 cout<<a.getx()<<" "<<a.gety()<<" "<<a.getz();   
}
int main(){
    abc a(1,2,3);
printABC(a);
return 0;
}

// here we use muitable keyword.this keyword used for constant value changed
// #include<iostream>
// using namespace std;
// class abc{
//   mutable int x;
//   int *y;
//   int z; 
//   public:
//   abc(int a,int b,int c=0){
//     x=a;
//     y=new int(b);
//     z=c;
//   }
//   int getx()const{
//     x=10;
//    return x;
//   } 
//   void setx(int val) {
//     x=val;
//   }
//   int gety() const {
//    return *y;
//   }
//   void sety(int val){
//      *y=val;
//   }
//   int getz()const{
//     return z;
//   }
 
// };
// void printABC(abc &a){
//  cout<<a.getx()<<" "<<a.gety()<<" "<<a.getz();   
// }
// int main(){
//     abc a(1,2,3);
// printABC(a);
// return 0;
// }