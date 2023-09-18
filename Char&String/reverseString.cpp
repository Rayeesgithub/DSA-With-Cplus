#include <iostream>
#include<cstring>
using namespace std;
void reversecharArray(char name[]) {
        int i = 0;
        int n = strlen(name);
        int j = n - 1;

        while(i<=j) {
                swap(name[i], name[j]);
                i++;
                j--;
        }

}
int main(){
   char name[100];
   cout<<"entyer your name:";
   cin>>name;
 cout<<"Before swap:"<<name<<endl;
  reversecharArray(name);
   cout<<"after swap:"<<name<<endl;
   return 0;
}