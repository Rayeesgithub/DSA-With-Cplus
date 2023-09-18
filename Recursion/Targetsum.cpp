#include<iostream>
#include<vector>
using namespace std;
int Solve(vector<int>&arr,int target){
  // base case
  if (target==0)
  {
    return 0;
  }
  // base case2
  if (target<0)
  {
    return INT_MAX;
  }
   // 1 case solve 
   int mini=INT_MAX;
    for(int i=0; i<arr.size(); i++){
   
    int ans=Solve(arr,target-arr[i]);
     if(ans!=INT_MAX)
     mini=min(mini,ans+1);
   
   }
   return mini;
}
int main(){
    vector<int>arr={1,2};
    int n=arr.size();
    int target=5;
    int ans=Solve(arr,target);
    cout<<"MinMUM subArray target sum is:"<<ans;
}