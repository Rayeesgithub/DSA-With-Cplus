#include<iostream>
using namespace std;
class NStack{
int a,*top,*next;
int n;
int size;
int freespot;
public:
NStack(int _n,int _s):n(_n),size(_s){
    a=new int[size];
    freespot=0;
    top=new int[n];
    next=new int[size];
    for (int i = 0; i < n; i++)
    {
        top[i]=-1;
    }
      for (int i = 0; i < n; i++)
    {
        next[size-1]=i+1;
    }
    next[size-1]=-1;
}
bool push(int X,int m){
    if (freespot==-1)
    {
       return false;
    }
    //find-index
    int index=freespot;
    //update freespot
    freespot=next[index];
    //insert
    a[index]=X;
    //update next
    next[index]=top[n-1];
    // update top
    top[n-1]=index;
    return true;

}
// pop from the stack
int pop(int n){
    if(top[n-1]==-1){
        return -1;
    }
    int index=top[n-1];
    top[n-1]=next[index];
    int popedElemnt=a[index];
    next[index]=freespot;
    freespot=index;
    return popedElemnt;
}
~NStack(){
    delete[] a;
    delete[] top;
    delete[] next;
}
};
int main(){
    NStack s(3,6);
    cout<<s.push(10,1)<<endl;
    cout<<s.push(10,1)<<endl;
    cout<<s.push(10,1)<<endl;
    cout<<s.push(14,2)<<endl;
    cout<<s.push(15,3)<<endl;
    s.pop(1);
    s.pop(2);
}