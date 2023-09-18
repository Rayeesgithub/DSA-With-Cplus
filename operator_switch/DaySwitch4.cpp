#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter the Day:";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Today is Monday"<<endl;
        break;
    case 2:
    cout<<"Today is tuesday"<<endl;
    break;
    case 3:
    cout<<"Today is Wednesday"<<endl;
    break;
    case 4:
    cout<<"Today is Thursday"<<endl;
    break;
    case 5:
    cout<<"Today is Friday"<<endl;
    break;
    case 6:
    cout<<"today is Satuarday"<<endl;
    break;
    case 7:
    cout<<" Today is Sunday"<<endl;
    break;
    default:
    cout<<"there is only seven day in week thats why you wrong input";
        break;
    }
}