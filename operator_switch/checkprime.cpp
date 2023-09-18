#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the any number:";
    cin>>n;
    bool isprime=true;
    if (i==0 || i==1)
   {
   isprime= false;
    }
    for( i = 2;  i<n; i++)
    {
        if (n%i==0)
        {
            isprime= false;
           break; 
        }
       
    }
    
        if (isprime==false)
        {
            cout<<"this is not prime number"<<endl;
        }
      else
      {
        cout<<"this is prime number"<<endl;
      } 
      return 0;
    }
   
    
