#include<iostream>
using namespace std;
class dequeue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    dequeue(int size) {
                this->size = size;
                arr = new int[size];
                front = -1;
                rear = -1;
        }
          ~dequeue() {
        delete[] arr;
    }
    void pushRear(int data){
     if((front == 0 && rear == size-1)) {
                        cout << "Q is fulll, cannot insert" << endl;
                }
       //one case
       else if(front==-1){
        front=rear=0;
        
       }
       else if(rear==size-1 && front!=0){
        // circular
        rear=0;
       
       }
       // normal c ase
       else{
        rear++;
       
       }
     arr[rear]=data;

    } 
    // push front 
     void pushFront(int data){
     // Queue is full (One condition to handle)
        if ((front == 0 && rear == size - 1))
        {
            cout << "Q is fulll, cannot insert" << endl;
            return;
        }
        // Empty case
        else if (front == -1)
        {
            front = rear = 0;
        }
        // Circular case
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        // Normal flow
        else
        {
            front--;
        }
        arr[front] = data;

    } 
      void popFront()
    {   
        // Empty queue
        if (front == -1)
        {
            cout << "Q is empty , cannot pop" << endl;
            return;
        }
        // Single element case
        else if (front == rear)
        {
           
            front = -1;
            rear = -1;
        }
        // Circular case
        else if (front == size - 1)
        {
            
            front = 0;
        }
        // Normal flow
        else
        {
           
            front++;
        }
    }
    // popRear function
    void popRear()
    {
        // Empty queue
        if (front == -1)
        {
            cout << "Q is empty , cannot pop" << endl;
            return;
        }
        // Single element case
        else if (front == rear)
        {
          
            front = -1;
            rear = -1;
           
        }
        // Circular case
        else if (rear == 0)
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        // Normal flow
        else
        {
            
            rear--;
        }
    }
    // printing 
    void print(){
          int i = front;// Initialize i with the front index of the deque
        while (true) {
            cout << arr[i] << " ";// Print the element at index i
            if (i == rear) {// If i reaches the rear index, exit the loop
                break;
            }
            if (i == size - 1) {// If i reaches the end of the array, wrap around to the beginning
                i = 0;
            } else {
                i++;// Increment i to move to the next element
            }
        }
        cout << endl;
    }
   
    
};
int main(){
    dequeue dq(5);
      dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);
    dq.pushFront(40);
    dq.pushFront(50); 
   
    dq.print();
    // after front print 
    cout<<endl;
    cout<<"after pop:";
    dq.popFront();
    dq.popRear();
    dq.print();
   

    

// return 0;
}