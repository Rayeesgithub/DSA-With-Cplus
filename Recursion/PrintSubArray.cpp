#include<iostream>
#include<vector>
using namespace std;
void printSubarray_utill(vector<int>num,int start,int end){
//base case
if (end==num.size())
{
    return;   
}
//ek case sol;ve
for (int  i = start; i <= end; i++)
{
    cout<<num[i]<<" ";
}
  cout<<endl;
  // baki recursion sambhal lega
printSubarray_utill(num,start,end+1);
}
void printsubarray(vector<int>&num){
    for (int start = 0; start<num.size(); start++)
{
    int end=start;
    printSubarray_utill(num,start,end);
}

}


int main(){
    vector<int>num={1,2,3,4,5};
    printsubarray(num);
    return 0;
}

