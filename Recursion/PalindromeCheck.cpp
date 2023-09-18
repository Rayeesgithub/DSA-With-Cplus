#include<iostream>
using namespace std;
bool CheckPalindrome(string& s,int start,int end){
// base case
if (start>=end)
{
    return true;
}
// ek case solve karna hai
if (s[start]!=s[end])
{
    return false;
}
// bakin sambha lega 
return CheckPalindrome(s,start+1,end-1);
}
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int start=0;
    int end=s.size()-1;
    //int ans;
    CheckPalindrome(s,start,end);
   cout<<CheckPalindrome(s,start,end);
    
    
}