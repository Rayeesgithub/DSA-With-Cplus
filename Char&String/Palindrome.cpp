#include<iostream>
#include<cstring>
using namespace std;
bool checkPalindrome(char word[] ) {
        int i=0;
        int n = strlen(word);
        int j = n - 1;

        while(i <= j) {
                if(word[i] == word[j]) {
                        return true;
                }
                else {
                        i++;
                        j--;
                }
        }
        return false;
}
int main(){
    char word[100]="RABAR";
    cout << "palindrome check: " <<checkPalindrome(word); 

}