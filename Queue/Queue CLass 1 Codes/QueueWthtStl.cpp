#include<iostream>
using namespace std;
class Queue{
 public:
 int *arr;
 int size;
 int front;
 int rear;
 // costructor
 Queue(int size){
    this->size=size;
    arr=new int[size];
     front=0;
    rear=0;
 }
 // Push (enqueue) operation
void push(int data){
    if (rear==size)
    {
        cout<<"Queue is overflow"<<endl;
    }
    else{
        arr[rear]=data;
        rear++;
    }
    
}
  // Pop (dequeue) operation
void pop(){
    if (front==rear)
    {
        cout<<"queue is emty(underflow)"<<endl;
    }
    else{
        arr[front]=-1;// Mark the element as removed
        front++;
    if (front==rear)
    {
        front=0;
        rear=0;
    }
    
    }
   
}
int getfront(){
    if (front==rear)
    {
      cout<<"queue is empty:"<<endl;
      return -1;
    }
    else{
       return arr[front];
    }
}
 int getrear(){
        return arr[rear];
    }
    // Check if the queue is empty
bool isempty(){
    if (front==rear)
    {
        return true;
    }
    else{
        return false;
    }
}
  // Get the current size of the queue
int getsize(){
    return rear- front;
}
};
int main(){
     // Create a queue with a size of 5
    Queue q(5);
     // Push elements into the queue
    q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
cout<<"Queue size is:"<<q.getsize()<<endl;
// Remove an element from the front
q.pop();
cout<<"Queue size is:"<<q.getsize()<<endl;
//top elelmnt
cout<<"front elemnt is:"<<q.getfront()<<endl;
// check emty
if (q.isempty())
{
    cout<<"queue is empty element"<<endl;
}
else{
    cout<<"queue is not emty"<<endl;
}
return 0;
}