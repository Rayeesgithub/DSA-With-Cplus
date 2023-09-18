#include<iostream>
using namespace std;
int passvalue(int b){
    ++b;
    b++;
    cout<<"b3:"<<b<<endl;;
return b;
}

int main()
{
    int b=12;
    b++;
    ++b;
    cout<<"b1:"<<b<<endl;
  // --b;
     b=passvalue(b);


   cout<<"b2:"<<(b);
    return b;
}