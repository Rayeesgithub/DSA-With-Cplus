#include<iostream>
using namespace std;
class fruit{
  public:
  string name="KashmiriFruit";
};
class Mango:public fruit{
 public:
 int weight=50;
};
class Jardango:public Mango{
    public:
    int sugarlevel=120;
};
int main(){
    Jardango obj;
    
    cout<<obj.name<<endl<<obj.weight<<endl<<obj.sugarlevel<<endl;
}