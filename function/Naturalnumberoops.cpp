#include <iostream>
using namespace std;
class NaturalNumber {
  
 private:
  int number;

  
 public:
  void natural(int n) {
  
    number = n;

    
    int index;

    
    for (index = 1; index <= number; index++) {
      
    
    }

    
   cout<<"Natural Number is:"<<index<<"";
  }
};

int main() {
  
NaturalNumber S;

  
  int n;

  cout << "Enter Number: ";
  cin >> n;

  
  S.natural(n);

  return 0;
} 