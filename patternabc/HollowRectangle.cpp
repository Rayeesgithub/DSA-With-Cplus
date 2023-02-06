/*#include<iostream>
using namespace std;
int main()
{
    int rowcount;
    int colcount;
    cin>>rowcount;
    cin>>colcount;
    for ( int row = 0; row< rowcount; row++)
    {
       if (row==0 || row==rowcount-1)
       {
        for ( int col = 0; col<colcount; col++)
        {
            cout<<"*";
        }
       }
        else{
            cout<<"*";
        }

        for ( int i = 0; i<colcount-2; i++)
        {
            cout<<" ";
        }
        cout<<"*";
        
       }
       cout<<endl;
       cout<<endl; 
} */
    /*
    int rowCount, colCount;
     cin >> rowCount;
     cin >> colCount;
    
    // //Hollow Rectangle
     for(int row=0; row<rowCount; row=row+1) {
      //first row or last row -> print 5 *
      if(row == 0  || row == rowCount-1 ){
          for(int col=0; col<colCount; col++) {
              cout << "* ";
        }
      }
      else {
    //      //remainging middle rows
    //      //first star
          cout << "* ";
    //      //spaces
         for(int i=0; i< colCount-2; i=i+1){
             cout << "  ";
         }
    //      //last star
        cout << "* ";
     }
    //  cout << endl;
    }
}*/
#include <iostream>
using namespace std;

int main() {
  int rowcount;
  int colcount;
  cin >> rowcount;
  cin >> colcount;

  for(int row = 0;row <rowcount;row++){
    for(int col = 0;col <colcount;col++){
      //First Row And Last Row
      if(row == 0 || row == rowcount-1){
        cout << "* ";
      }
      else {
        //First Column And Last Column
        if(col == 0 || col == colcount-1){
          cout << "* ";
        }
        else {
          cout << "  ";
        }
      }
    }
    cout << endl;
  }
}