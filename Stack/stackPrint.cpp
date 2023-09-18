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
     cout<<"Top elemnt in stack:"<<st.top()<<endl;
    // print the element
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}