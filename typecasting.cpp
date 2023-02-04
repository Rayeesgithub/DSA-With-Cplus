//Typecasting
  #include<iostream>
  using namespace std;
  int main()
  {
    int a=45;
    float b=45.56;
    cout<<"the value of a is:"<<float(a)<<endl;
    cout<<"the value of a is:"<<(float) a<<endl;
   cout<<"the value of b is:"<<int(b)<<endl;
   cout<<"the value of  is:"<<a+b<<endl;
   cout<<"the value of is :"<<a+int(b)<<endl;
   cout<<"the value of is:"<<a+(int)b<<endl;
   return 0;
  }