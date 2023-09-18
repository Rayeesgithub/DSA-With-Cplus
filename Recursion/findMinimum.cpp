#include<iostream>
using namespace std;
void findMinimum(int arr[],int n,int i,int &mini){
   // base case
   if (i>=n)
   {
    return;
   }
  mini=min(mini,arr[i]);
 
   findMinimum(arr,n,i+1,mini);
}
int main(){
    int arr[]={10,30,21,44,32,17,66,19};
    int n=8;
    int i=0;
   int mini=INT_MAX;
   findMinimum(arr,n,i,mini);
   cout<<"Minimum Number is:"<<mini;
}