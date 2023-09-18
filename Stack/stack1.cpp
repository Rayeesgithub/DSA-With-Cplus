#include<iostream>
#include<stack>
using namespace std;
int main(){
    // create stack
    stack<int>st;
    // insert  element
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // remove elememt
    st.pop();
    // check elemnt on the top
    cout<<"Top elemnt in stack:"<<st.top()<<endl;
    //  print the element
    // while (!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    cout<<endl;
    // size
    cout<<"size of the stack:"<<st.size()<<endl;
    // check empty
    if (st.empty())
    {
      cout<<"this stack is empty"<<endl;
    }else{
        cout<<"this stack is not empty"<<endl;
    }
    
}
