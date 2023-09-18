#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(char first,char second){
 // when first>second then sorting in descending order
    return first>second;
}
bool compare(int x ,int y){
    return x>y;
}


int main(){
    string s="rahul";
    sort(s.begin(),s.end(),cmp);
    vector<int>arr{5,3,2,1,4};
    sort(arr.begin(),arr.end(),compare);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<s;

}