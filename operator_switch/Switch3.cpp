#include<iostream>
using namespace std;
int main()
{
    int Score;
    cin>>Score;
    int low;
    int medium;
     int High;

switch (Score)
{
case 100: cout<<"Most of the chance India loss this match";
    
    break;
case 250: 
cout<<"May be India won this match";
break;
case 500: 
cout<<"Most of hte chance india won this match";
break;
default: cout<<"i do not know which team won this match";
    break;
}
}