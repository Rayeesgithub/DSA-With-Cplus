#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    for ( int row = 0; row<n; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            if(col%2!=0){
                cout<<"*";
            }
            else{
            cout<<row+1;
        }
        }
        cout<<endl;
    }
     for ( int row = 0; row<n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
             if(col%2!=0){
                cout<<"*";
            }
            else{
            cout<<n-row;
        }
        }
    cout<<endl;
    }
    
}

