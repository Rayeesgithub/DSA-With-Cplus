#include<iostream>
#include<limits.h>
using namespace std;
void findMaximum(int arr[],int n,int i,int& max){
      // base case
      if (i>=n)
      {
      return ;
      }
      //1 case solve krna h 
        //current element ko cjheck karo for max
      if (arr[i]>max)
      {
        max=arr[i];
      }
      // baki recursion sambhal lega
      findMaximum(arr,n,i+1,max);
}


int main(){
    int arr[]={10,30,21,44,32,17,66,19};
    int n=8;
    int i=0;
    int max=INT_MIN;
    findMaximum(arr,n,i,max);
    cout<<"Maximum number is:"<<max;

}