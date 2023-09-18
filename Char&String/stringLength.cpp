#include<iostream>
#include<cstring>
using namespace std;
int getlength(char name[]){
int i=0;
int length=0;
while (name[i]!='\0')
{
    i++;
    length++;
}
return length;
}


int main(){
    char name[100];
    cout<<"enter your name:";
    cin>>name;
     getlength(name);
     cout << "length is: " << getlength(name) << endl;
         cout << "Length is -> " << strlen(name) << endl;

}


// #include <iostream>
// using namespace std;

// int main() {
//     string str = "rayees alam";

//     // you can also use str.length()
//     cout << "String Length = " << str.size();
  
//     return 0;
// }