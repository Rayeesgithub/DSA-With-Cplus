#include<iostream>
using namespace std;
int checkprime(int n)
{
   for(int i=2; i<n; i++)
    {
    if (n%i==0)
    {
        return 0;
        break;
    }
    }
    return 1;

}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int ans=checkprime(n);
   if (checkprime(n))
   {
    cout<<"this is prime number:";
   }
   else{
    cout<<"this is not prime number:";
   }
    return 0;
}