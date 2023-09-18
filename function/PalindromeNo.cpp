#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,remainder,original;

    cout<<"Enter the Positive Number:";
    cin>>n;
    original=n;
  while (n>0)
    {
        remainder=n%10;
        reverse=(reverse*10)+remainder;
        n=n/10;
    }
        if (original=reverse)
        
            cout<<"This is Palindrome Number"<<endl;
        
        else
            cout<<"This is not palindrome number"<<endl;
        
}
    
    
