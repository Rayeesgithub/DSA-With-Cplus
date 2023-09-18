#include<iostream>
using namespace std;
void ReverseString(string &s,int start,int end){
   // base case
   if (start>=end)
   {
     return;
   }
    // ek case solve  karna hai
    swap(s[start],s[end]);
    // baki recusion sambhal lega
    ReverseString(s,start+1,end-1);
}
int main(){
    string s;
    cout<<"enter the string:";
    cin>>s;
    int start=0;
    int end=s.size()-1;
    ReverseString(s,start,end);
    cout<<"Revrse String is:"<<s<<endl;
}