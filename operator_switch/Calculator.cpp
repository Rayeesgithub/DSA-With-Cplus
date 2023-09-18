#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the First Number";
    cout<<endl;
    cout<<"Enter the second number";
    cout<<endl;
    cin>>a>>b;
    char oper;
    cout<<"enter the Operation";
    cin>>oper;
    switch (oper)
    {
    case '+':
    cout<<(a+b)<<endl;
        break;
    case '-':
    cout<<(a-b)<<endl;
    break;
    case '*' :
    cout<<(a*b)<<endl;
    break;
    case '/':
    cout<<(a/b);
    break;
    case '%':
    cout<<(a%b);
    break;
    default:
    cout<<"Enter the valid opertor";
        break;
    }

}