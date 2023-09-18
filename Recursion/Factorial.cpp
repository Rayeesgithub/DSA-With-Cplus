// #include<iostream>
// using namespace std;
// int  factorial(int n){
//       //base case
//       if(n==0 )
//         return 1;
      
//        int ans=n*factorial(n-1);
//        return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter the Number:";
//     cin>>n;
//     int ans=factorial(n);
//     cout<<"factorial is :"<<ans<<endl;
//     return 0;
// }
  //Second Method
  #include<iostream>
  using namespace std;
  int fact(int n){
 // base case
 if(n==0 || n==1)
  return 1;
   // recursive relation
   int chotiprblm=fact(n-1);
   int badiprblm=n*chotiprblm;
   return badiprblm;
  }
  int main(){
    int n;
    cout<<"enter the any number:";
    cin>>n;
    int ans=fact(n);
    cout<<"Factorial of:"<<ans;
    return 0;
  }