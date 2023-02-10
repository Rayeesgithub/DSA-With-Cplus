#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for ( int row = 0; row < n; row++){
    int col;
      //space
        for (int col = 0; col<n-row-1; col++)
        {
            cout<<" ";
        }
        // Number print 
        int start=row+1;
       for (int col = 0; col<row+1; col++)
        {    
            cout<<start;
            start=start+1;
        }
        start=2*row;
        for (int col = 0; col<row; col++)
        {
            cout<<start;
            start=start-1;
        }
        cout<<endl;
    }
}