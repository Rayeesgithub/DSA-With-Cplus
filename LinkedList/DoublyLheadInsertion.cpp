#include <iostream>
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
        
};//I want to insert a node right at the head of Linked List
void insertAtHead(Node* &head,Node* &tail, int data) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                
        }
     else{
        // non empty
        Node* newNode=new Node(data);
        newNode->next=head;
        head->prev=newNode;
        // step 4 update
        head=newNode;
     }
  
    }
          
   
void print(Node* head) {

        Node* temp = head;
        while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}
int main(){
        Node* first=new Node(10);
        Node* second=new Node(20);
        Node* third=new Node(30);
        Node* head=first;
        Node* tail=third;
        first->next=second;
        second->prev=first;
        second->next=third;
        third->prev=second;
        print(first);
        cout<<endl;
 insertAtHead(head,tail,101);
 print(head);
       
   }

