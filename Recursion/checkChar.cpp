// #include<iostream>
// using namespace std;
// bool Checkkey(string &str,int n,int i,char key){
//    // base case
//    if (i>=n)
//    {
//     return false;
//    }
//    if(str[i]==key){
//    return true;}
//    return Checkkey(str,n,i+1,key);

// }
// int main(){
//     string str="rayeesalam";
//     int n=str.length();
//     int i=0;
//     char key='s';
//     bool ans=Checkkey(str,n,i,key);
//     cout<<"Answer is:"<<ans;
// }

// adject index print
// #include<iostream>
// using namespace std;
// int Checkkey(string &str,int n,int i,char key){
//    // base case
//    if (i>=n)
//    {
//     return -1;
//    }
//    if(str[i]==key){
//    return i;}
//    return Checkkey(str,n,i+1,key);

// }
// int main(){
//     string str="rayeesalam";
//     int n=str.length();
//     int i=0;
//     char key='s';
//     int ans=Checkkey(str,n,i,key);
//     cout<<"Answer is:"<<ans;
// }
    

//     // how many times print occurannnce
//     #include<iostream>
// using namespace std;
// void Checkkey(string &str,int n,int i,char key){
//    // base case
//    if (i>=n)
//    {
//     return ;
//    }
//    if(str[i]==key){
//     cout<<"found at:"<<i<<endl;
//    }
//    return Checkkey(str,n,i+1,key);

// }
// int main(){
//     string str="rayeesalam";
//     int n=str.length();
//     int i=0;
//     char key='a';
//     Checkkey(str,n,i,key);
//     //cout<<"Answer is:"<<ans;
// }


/// // Ans store 
  #include<iostream>
  #include<vector>
using namespace std;
void Checkkey(string &str,int n,int i,char key ,vector<int>&ans){
   // base case
   if (i>=n)
   {
    return ;
   }
   if(str[i]==key){
    ans.push_back(i);
   }
   return Checkkey(str,n,i+1,key,ans);

}
int main(){
    string str="rayeesalam";
    int n=str.length();
    int i=0;
    char key='a';
    vector<int> ans;
    Checkkey(str,n,i,key,ans);
    cout<<"printing ans:";
    for ( auto val:ans)
    {
        cout<<val<<" ";
    }
    
    //cout<<"Answer is:"<<ans;
}