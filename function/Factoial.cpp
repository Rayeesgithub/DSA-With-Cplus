#include<iostream>
using namespace std;
 int Findfactorial(int n)
 {
 int fact=1;
 for (int i = 1; i <=n; i++)
 {
    fact=fact*i;
 }
    return fact;
 }      



int main()
{
    int n;
    cin>>n;
    int Factorial=Findfactorial(n);
    cout<<Factorial;
}

