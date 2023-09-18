#include<iostream>
using namespace std;
 #define PI 3.14
 float circleArea(int r){
    return PI*r*r;
 }
 float circleperimeter(int r){
   return  2*PI*r;
 }
 int maain(){
    cout<<"area of circle"<<circleArea(10)<<endl;
    cout<<"perimetr of circle:"<<circleperimeter(20)<<endl;
    return 0;
 }

//2nd example
// #include<iostream>
// using namespace std;
// #define MAXX(x,y) (x>y?x:y)
// void fun(){
//    int x=5;
//    int y=7;
//    int z=MAXX(x,y);
// }
// void fun2(){
//    int x=8;
//    int y=7;
//    int z=MAXX(x,y);
// }
// int main(){
//    cout<<fun2()<<endl;
// }