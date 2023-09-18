#include <iostream>    
using namespace std;    
class student    
{    
    private:    
        int rollNo;    
    public: 
    int id=123;      
        friend int printrollno(student); //friend function    
};    
int printrollno(student b)    
{    
   b.rollNo = 10;    
    return b.rollNo;    
}    
int main()    
{    
    student b;    
    cout<<"student roll no is: "<< printrollno(b)<<endl;    
    return 0;    
}    

