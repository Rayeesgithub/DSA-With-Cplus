#include<iostream>
#include<vector>
using namespace std;
bool chekSorted(vector<int>arr,int n,int i){
   // base case
   if (i==n-1)
   {
    return true;
   }
   // 1 case solve kiya
   if (arr[i+1]<=arr[i])
   {
     return false;
   }
   return chekSorted(arr,n,i+1);
}
int main(){
    vector<int>arr={10,20,35,05,60,65};
    int n=arr.size();
    int i=0;
    bool isSorted=chekSorted(arr,n,i);
    if (isSorted)
    {
        cout<<"this is the Sorted Array"<<endl;
    }
    else{
        cout<<"this is not sorted array"<<endl;
    }
}