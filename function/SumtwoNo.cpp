#include<iostream>
using namespace std;
int getsum(int x,int y)
{
int result=x+y;
return result;


}
int main()
{
int a, b;
cout<<"Enter the any two number:";
cin>>a>>b;
int sum=getsum( a, b);
cout<<"sum of two number is:"<<sum<<endl;
}