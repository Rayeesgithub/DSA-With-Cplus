// #include<iostream>
// using namespace std;
// int fib(int n){
//    //base case
//    if(n==1 )
//      return 0;
//      if(n==2)
//      return 1;
//      int ans=fib(n-1)+fib(n-2);
//      return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter the any Number:";
//     cin>>n;
//       int ans=fib(n);
//       cout<<n<<"th term is:"<<ans;
// }

  // second Mthod
  #include<iostream>
using namespace std;
int fib(int n){
   //base case
   if(n==1  )
     return 0;
     if(n==2)
     return 1;
     //int ans=fib(n-1)+fib(n-2);
     return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"Enter the any Number:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
      cout<<fib(i)<<" ";
    }
    
}