// method1->from left to right
// #include<iostream>
// using namespace std;
//  void LastOccuranceLtoR(string& s,char x,int i,int &ans){
//      // base case
//      if (i>=s.size())
//      {
//         return;
//      }
//      // ek case solve karna hai
//   if (s[i]==x)
//   {
//     ans=i;
//   }
//   LastOccuranceLtoR(s,x,i+1,ans);
     
//  }
//  int main(){
//     cout<<"Enter the string:";
//     string s;
//     cin>>s;
//     cout<<"Enter the charecter:";
//     char x;
//     cin>>x;
//     int ans=-1;
//     LastOccuranceLtoR(s,x,0,ans);
//     cout<<"index at:"<<ans<<endl;
//     return 0;
//  }

// method2->Right to left method
#include<iostream>
using namespace std;
void LastOccRtoL(string& s,char x,int i,int &ans){
// base case
if (i<0)
{
    return;
}
  //ek case solve karna hai
  if (s[i]==x)
  {
    ans=i;
    return;
  }
  LastOccRtoL(s,x,i-1,ans);
}
int main(){
string s;
cout<<"enter the string:";
cin>>s;
char x;
cout<<"Enter the charecter:";
cin>>x;
int ans=-1;
LastOccRtoL(s,x,s.size()-1,ans);
cout<<"answer at index is:"<<ans<<endl;

}