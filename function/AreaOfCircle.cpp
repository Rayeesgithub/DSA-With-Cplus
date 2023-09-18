#include<iostream>
using namespace std;
float getarea(int rad){
    float Area=(3.14*rad*rad);
    return Area;
}
int main()
{
    int rad;
   cout<<"Enter the Radius:";
    cin>>rad;
   float areaofcircle=getarea(rad);
   cout<<"Area of circle:"<<areaofcircle;
}