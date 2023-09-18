#include<iostream>
#include<string>
using namespace std;
int main(){
     string stra = "ABCDEFGHIJKLMNOPQRST";
    //  10 th element se start karo or 10 10th element delete kro
        stra.erase(10,10);
        cout << stra<<endl;
       string str = "This is my First Message";
     //11th index se start kro & 5 element replace kr second put kro
        str.replace(11, 5 , "Second");
                cout << stra << endl;
                //str.substar(1,3) means index 1 se 3 tk elemnt print kro
                cout << stra.substr(1, 3) << endl;
               string sentence = "hello Jee kaise ho saare";
             string target = "kaise";
               string a = "Love";
  string b = "love";

  if(a.compare(b) == 0) {
          cout << " a and b are exactly same strings" << endl;
  }
  else {
          cout << "a and b are not same" << endl;
  }

  string x = "bbbb";
  string y = "bbbba";

  cout << x.compare(y) << endl;

  }
