#include<iostream>
using namespace std;
class Node{
   public:
        int data;
        Node* next;
        Node* prev;
        Node(){
            this->data=0;
            this->prev=NULL; 
            this->next=NULL;
               
        }
        Node(int data){
                this->data=data;
                this->prev=NULL;
                this->next=NULL;
                
        }
        ~Node(){
          cout<<"Node with value:"<<this->data<<"delete"<<endl;
        }
};
   void print(Node* &head){
         Node* temp=head;
           while (temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   
   }
     int findlength(Node* &head){
        int len=0;
        Node* temp=head;
        while (temp!=NULL)
        {
            temp=temp->next;
            len++;
        }
        return len;
    }
     void insertAtHead(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            head->prev = newNode;
            head->next = newNode;
        } else {
            newNode->next = head;
            newNode->prev = head->prev;
            head->prev->next = newNode;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtTail(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            head->prev = newNode;
            head->next = newNode;
        } else {
            newNode->prev = head->prev;
            newNode->next = head;
            head->prev->next = newNode;
            head->prev = newNode;
        }
    }

    void insertAfter(int searchData, int newData) {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }

        Node* current = head;
        do {
            if (current->data == searchData) {
                Node* newNode = new Node(newData);
                newNode->prev = current;
                newNode->next = current->next;
                current->next->prev = newNode;
                current->next = newNode;
                return;
            }
            current = current->next;
        } while (current != head);

        cout << "Data not found in the list." << endl;
    }

    void deleteNode(int data) {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }

        Node* current = head;
        do {
            if (current->data == data) {
                if (current == head) {
                    head = head->next;
                    head->prev = current->prev;
                    current->prev->next = head;
                } else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        } while (current != head);

        cout << "Data not found in the list." << endl;
    }