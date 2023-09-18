#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>nextSmallerElement(vector<int>&v){
  // create a stack
  stack<int>s;
  // by default case push initialize
  s.push(-1);
  vector<int>ans(v.size());

  // traverse from right to left
  for (int i =v.size()-1; i>=0; i--)
  {
    // current elemnt rocessing(finding)
    int curr=v[i];
    // answer store hai loop me 
    while (s.top()>=curr)
    {
      s.pop();
    }
    // chota found ->ans store
    ans[i]=s.top();
     // push the curr elemnt
     s.push(curr);
  }
  return ans;
}
int main(){
  vector<int>v;
  v.push_back(2);
  v.push_back(1);
  v.push_back(4);
  v.push_back(3);
 
 vector<int>ans=nextSmallerElement(v);
 
 // printing
 for (int i = 0; i <v.size(); i++)
 {
  cout<<ans[i]<<" ";
 }
 

}

         
