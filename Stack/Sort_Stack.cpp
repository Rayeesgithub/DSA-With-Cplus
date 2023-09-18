#include<iostream>
#include<stack>
using namespace std;
void sortInserted(stack<int>&s,int target){
    if (s.empty())
    {
     s.push(target);
     return;
    }
    if (s.top()>=target)
    {
      s.push(target);
      return;
    }
    int topelemnt=s.top();
    s.pop();

    sortInserted(s,target);

    //backtrack
    s.push(topelemnt);
    
}
void sortStack(stack<int>&s){
if (s.empty())
{
  return;
}
int topelement=s.top();
s.pop();
// recursive call
sortStack(s);
sortInserted(s,topelement);

}
int main(){
    stack<int>s;
    s.push(9);
    s.push(5);
    s.push(3);
    s.push(11);
    s.push(7);
    sortStack(s);
    while (!s.empty())
    {
      cout<<s.top()<<" ";
      s.pop();
    }
    cout<<endl;
}