#include<iostream>
#include<vector>
using namespace std;
void countelemnt(string& str,int i,int n, char key,int& count){
 // base case
 if (i>=n)
 {
    return;
 }
   
   if(str[i]==key)
   {
    count++;
   }
   
   countelemnt(str,i+1,n,key,count);
}
int main(){
    string str="rayeesalam";
    int n=str.length();
    int i=0;
    int count=0;
    char key='a';
   countelemnt(str,i, n, key, count);
   cout<<"Toatal no of count:"<<count;
}