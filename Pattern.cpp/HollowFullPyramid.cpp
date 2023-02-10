#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for ( int row = 0; row<n; row++)
    {
    // Spaces 
    for ( int col = 0; col<n-row-1; col++)
    {
      cout<<" ";
    }
    // Star
    cout<<"*";
    for ( int col = 0; col<row; col++)
    {
       if (row==n-1) {
        cout << "* ";
       }
        else {
          cout << "  ";   
    }    
      }cout<<"*"<<endl;
}
    }