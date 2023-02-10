#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // Full Pyramid
    for ( int row = 0; row<n; row++)
    {
    // Spaces 
    for ( int col = 0; col<n-row-1; col++)
    {
      cout<<" ";
    }
    for ( int col = 0; col< row+1; col++)
    {
        cout<<"* ";
    }
    cout<<endl;
    }
// inverted full pyramid
 for ( int row = 0; row<n; row++)
    {
    // Spaces 
    for ( int col = 0; col<row; col++)
    {
      cout<<" ";
    }
    for ( int col = 0; col< n-row; col++)
    {
        cout<<"* ";
    }
    cout<<endl;
    }

}