#include<iostream>
#include<queue>
using namespace std;
int main(){
    // create queue
    queue<int>q;
    //insertation
    q.push(5);
    q.push(15);
    q.push(30);
    q.push(40);
    q.push(50);

    // size find 
    cout<<"size of queue:"<<q.size()<<endl;
    // remove
  q.pop();
  cout<<"size of queue"<<q.size()<<endl;
  // front ya top element
  cout<<"front element is:"<<q.front()<<endl;
  while (!q.empty())
  {
    cout<<q.front()<<"  ";
    q.pop();
  }
}
