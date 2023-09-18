#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s="rayees";
    // sort rayees in asscending order
    sort(s.begin(),s.end());
    vector<int>v={5,3,1,2,4};
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
        cout<<endl;
    }
     cout<<s;
}