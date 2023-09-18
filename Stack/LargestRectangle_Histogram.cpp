#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int>PreviousSmallerElemnt(vector<int>&input){
   stack<int>s;
    s.push(-1);
    vector<int>ans(input.size());
    // Left to right traversal for next smaller element
    for(int i = 0;i<input.size();i++){
        // Processing the current element
        int curr = input[i];
        while(s.top() != -1 && input[s.top()] >= curr){
            s.pop();
        }
        // Top element will be the answer -> Smaller element found
        ans[i] = s.top();
        // Push that index
        s.push(i);
    }
    return ans;
}
  vector<int>nextSmallerElemnt(vector<int>&input){
    stack<int>s;
    s.push(-1);
    vector<int>ans(input.size());
    // Right to left traversal for prev smaller element
    for(int i = input.size() -1 ;i>=0;i--){
        // Processing the current element
        int curr = input[i];
        while(s.top() != -1 && input[s.top()] >= curr){
            s.pop();
        }
        // Top element will be the answer -> Smaller element found
        ans[i] = s.top();
        // Push that index
        s.push(i);
    }

    return ans;

  }
  int getRectunglarAreaHistogram(vector<int>heights){
     // Previous smaller element array
    vector<int>prev = PreviousSmallerElemnt(heights);
    // Next smaller element array
    vector<int>next = nextSmallerElemnt(heights);
    // Find the max area
    int size = heights.size();
    int maxArea = INT_MIN;
    for(int i = 0;i<heights.size();i++){
        int length = heights[i];
        if(next[i] == -1){
            next[i] = size;
        }
        int width = next[i] - prev[i] - 1;
        int area = length*width;
        maxArea = max(maxArea,area);
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
  cout<<"Answer is:"<<getRectunglarAreaHistogram(v)<<endl;
  return 0;
}