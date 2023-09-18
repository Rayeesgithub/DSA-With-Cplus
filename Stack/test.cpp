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
    while (s.top()!=-1 && v[s.top()]>=curr)
    {
      s.pop();
    }
    // chota found ->ans store
    ans[i]=s.top();
     // push the curr elemnt
     s.push(i);
  }
  return ans;
}
vector<int>prevSmallerElement(vector<int>&v){
  // create a stack
  stack<int>s;
  // by default case push initialize
  s.push(-1);
  vector<int>ans(v.size());

  // traverse from right to left
  for (int i =0; i<v.size(); i++)
  {
    // current elemnt rocessing(finding)
    int curr=v[i];
    // answer store hai loop me 
    while (s.top()!=-1 && v[s.top()]>=curr)
    {
      s.pop();
    }
    // chota found ->ans store
    ans[i]=s.top();
     // push the curr elemnt
     s.push(i);
  }
  return ans;
}
int getAreaHistorgram(vector<int>height){
  vector<int>next=nextSmallerElement(height);
  vector<int>prev=prevSmallerElement(height);
  int maxArea=0;
  for (int i = 0; i <height.size(); i++)
  {
    int size=height.size();
   int length=height[i];
   if (next[i]==-1)
   {
    next[i]=size;
   }
   int width=next[i]-prev[i]-1;
   int Area=length*width;
   maxArea=max(maxArea,Area);
  }
  return maxArea;
}
int main(){
  vector<int>v;
  v.push_back(2);
  v.push_back(1);
  v.push_back(5);
  v.push_back(6);
  v.push_back(2);
  v.push_back(3);

 
 // printing
 
  cout<<getAreaHistorgram(v);
 
 

}