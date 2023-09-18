// #include<iostream>
// using namespace std;
// int x=4; //global varibale
// int main(){
//     x=6; //global varibale
//     int x=5; // local variable
//     cout<<x<<endl;
// }

#include<iostream>
using namespace std;

int x=4; //global
int main(){
    x=6; //global
    int x=20; // local
    {
        int x=44; //local
        cout<<x<<endl;
    }
    cout<<x<<endl; //print local var 20
    cout<<::x<<endl; // print global var 6
    return 0;
}