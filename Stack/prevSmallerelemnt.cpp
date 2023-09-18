#include<iostream>
#include<vector>
#include<stack>
using namespace std; 
vector<int>prevSmallerElemnt(vector<int>&input){
   stack<int>s;
   s.push(-1);
   vector<int>ans(input.size());
   for (int i = 0; i <input.size(); i++)
   {
       int curr=input[i];
       while (s.top()>=curr)
       {
        s.pop();
       }
       ans[i]=s.top();
       s.push(curr);
   }
   return ans;

}

int main(){
   
    
    vector<int>input;
    input.push_back(2);
      input.push_back(1);
        input.push_back(4);
          input.push_back(3);
          stack<int>s;
          
          vector<int>ans=prevSmallerElemnt(input);
          for (int i = 0; i < input.size(); i++)
          {
          cout<<ans[i]<<" ";
          }
          
}