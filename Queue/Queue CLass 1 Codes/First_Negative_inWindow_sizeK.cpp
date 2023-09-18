#include<iostream>
#include<queue>
using namespace std;
void solve(int arr[],int k,int size){
deque<int>q;
    // Process first window of size = k
    for (int i = 0; i < k; i++)
    {
        // If negative number found, then simply insert index in queue
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }
     // Process the remaining windows
for (int i = k; i <size; i++)
{  // First store answer of previous window
   if (q.empty())
   {
   cout<<0<<" ";
      } else {
    cout<<arr[q.front()]<<" ";
   } 
    // Out of window element to be removed
        while (!q.empty() && (i - q.front()) >= k)
        {
            q.pop_front();
        }
        // Check current element whether negative or not. If negative then push index in queue
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
}
// For last window (as last window was not processed)
 if (q.empty())
   {
   cout<<0<<" ";
      } else {
    cout<<arr[q.front()]<<" "<<endl;
   } 

}
int main(){
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int k=3;
  int size=8;
  solve(arr,k,size);
  return 0;
}
  
       
  