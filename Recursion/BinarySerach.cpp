
#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int target) {
  //base case1

  if(s > e) 
    return -1;
  
  int mid = (s+e)/2;
      //  base case2
  if(arr[mid] == target)
    return mid;

  if(target> arr[mid]) {
    s = mid+1;
    return binarySearch(arr,s,e, target );

  }
  else {  
    e= mid-1;
    return binarySearch(arr,s,e, target);
    
  }

}

int main() {
  vector<int> arr{10,20,40,60,70,90,99};
  int target = 90;

  int n = arr.size();
  int s = 0;
  int e = n-1;
  int ans = binarySearch(arr, s, e, target );

  cout << "Answer is at index: " << ans << endl;

  return 0;
}