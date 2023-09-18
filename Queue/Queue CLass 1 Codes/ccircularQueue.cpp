#include <iostream>
using namespace std;

class CirQueue{
        public:
        int size;
        int *arr;
        int front;
        int rear;

        CirQueue(int size) {
                this->size = size;
                arr = new int[size];
                front = -1;
                rear = -1;
        }

        void enQueue(int data) {
                //Queue Full

                //single element case - > first element

                //circular nature

                //normal flow
                //TODO: add one more condition in the QUEUE FULL if block
                if((front == 0 && rear == size-1)) {
                        cout << "Q is fulll, cannot insert" << endl;
                }
                else if(front == -1) {
                        front = rear = 0;
                        arr[rear] = data;
                }
                else if(rear == size-1 && front != 0 ) {
                        rear = 0;
                        arr[rear] = data;
                }
                else{
                        rear++;
                        arr[rear]= data;
                } 
        }

        void deQueue() {
                //empty check
                //single element
                //circular nature
                //normal flow
                if(front == -1) {
                        cout << "Q is empty , cannot pop" << endl;
                }
                else if (front == rear) {
                        arr[front] = -1;
                        front = -1;
                        rear = -1;  
                }
                else if(front == size-1) {
                        front = 0;
                }
                else {
                        front++;
                }
        }

    bool isEmpty() {
        return front == -1;
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Circular queue is empty. Front element does not exist." << endl;
            return -1;
        }
        else {
            return arr[front];
        }
    }

    int getSize() {
        if (isEmpty()) {
            return 0;
        }
        else if (front <= rear) {
            return rear - front +1;
        }
        // else {
        //     return size - front + rear + 1;
        // }
    }
    
};

int main() {  
   CirQueue q(5);
  
    // Inserting elements in Circular Queue
    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);
    q.enQueue(10);
cout<<"size of element is:"<<q.getSize()<<endl;
    q.deQueue();
   cout<<"size of element is:"<<q.getSize()<<endl;
    
    cout<<"front elent is:"<<q.getFront()<<endl;
  
}