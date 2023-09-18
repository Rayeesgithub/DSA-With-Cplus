#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int target) {
        
         //base case
        if(s.empty()) {
                s.push(target);
                return;
        }
//step1
        int topElement = s.top();
        //step2
        s.pop();
        //recursive call
        insertAtBottom(s, target);
        //Backtracking 
        s.push(topElement);
        
}

int main() {
    //stack create
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  
  

  if(s.empty()) {
        cout << "stack is empty, cant insert at bottom" << endl;
        return 0;
  }

  int target = s.top();
  s.pop();
  insertAtBottom(s, target);





  cout << "Printing" << endl;
  while(!s.empty()) {
          cout << s.top() << " ";
          s.pop();
  }
  cout<<endl;

  return 0;
}