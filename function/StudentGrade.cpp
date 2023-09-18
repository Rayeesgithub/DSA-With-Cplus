#include<iostream>
using namespace std;
char getresult(int marks)
{
    if (marks>90)
    
        return 'A';
    
    else if (marks>80)
    
        return 'B';
    
    else if(marks>50)
    
        return 'C';
    
}

int main()
{
    int marks;
    cout<<"Enter the Marks:";
    cin>>marks;
   
   char studentGrade=getresult(marks);
    cout<<"studentgrade:"<<studentGrade<<endl;
    //return 0;
}