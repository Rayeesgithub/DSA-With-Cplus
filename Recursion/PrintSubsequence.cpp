//Method 1st
// #include<iostream>
// using namespace std;
// void PrintSubsequence(string str,string output,int i){
//    // base case
//    if (i>=str.length())
//    {
//     cout<<output<<" ";
//     return;
//    }
//    // exclude
//    PrintSubsequence(str,output,i+1);
//    // include
//    //output.push_back(str[i]);
//    output=output+str[i];
//    PrintSubsequence(str,output,i+1);
   
// }
// int main(){
//     string str="abc";
//  string output="";
//     int i=0;

//     PrintSubsequence(str,output,i);

// }
#include<iostream>
#include<vector>
using namespace std;
void PrintSubsequence(string str,string output,int i,vector<string>&v){
    // base case
    if (i>=str.length())
    {
        // store
        v.push_back(output);
        return;
    }
    // exclude 
    PrintSubsequence(str,output,i+1,v);
    // include
    output=output+str[i];
     
     PrintSubsequence(str,output,i+1,v);
}
int main(){
    string str="abc";
    string output ="";
    vector<string>v;
    int i=0;

    PrintSubsequence(str,output,i,v);
    cout<<" printing all subsequqnce"<<endl;
    for(auto val:v){
        cout<<val<<" ";
    }
}
