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
        void InsertAtTail(Node*&head,Node* &tail,int data)  {
            if (head==NULL)
            {
              Node* newNode=new Node(data);
              head= newNode;
              tail=newNode;
            }
            else{
              Node* newNode=new Node(data);
              tail->next=newNode;
              newNode->prev=tail;
              tail=newNode;
            }
        }
        void InsertAtMiddle(Node* &head,Node* &tail,int data,int position){
          // for empty
         if(position == 0) {
                insertAtHead(head, tail , data);
                return;
        }
       
        int len = findlength(head);
        
        if(position >= len) {
                InsertAtTail(head, tail, data);
                return;
        }
        //ste1:find prev and curr
        int i = 1;
        Node* prev = head;
        while(i < position) {
                prev= prev -> next;
                i++;
        }
        Node* curr = prev -> next;

        //step2;
        Node* newNode = new Node(data);

        //step3:
        newNode -> next = curr;

        //step4:
        prev -> next = newNode;
}

void DeleteElement(Node* &head, Node* &tail, int position) {
        if(head == NULL) {
                cout << "Linked list is empty";
                return;
        }
        if(head -> next == NULL) {
                //single node
                Node* temp = head;
                head = NULL;
                tail = NULL;
                delete temp;
                return;
        }
        int len = findlength(head);
        if(position > len) {
                cout << "please enter a valid position " << endl;
                return;
        }

        if(position == 1) {
                //want to delete the first node
                Node* temp = head;
                head = head ->next;
                head -> prev = NULL;
                temp ->next = NULL;
                delete temp;
                return;
        }
        
        if(position == len) {
                //delete last node
                Node* temp = tail;
                tail = tail -> prev;
                temp ->prev = NULL;
                tail ->next = NULL;
                delete temp;
                return;
        }  

        //delete from middle of linked list

        //step1: find left, curr, right
        int i = 1;
        Node* left = head;
        while( i < position - 1) {
                left = left -> next;
                i++;
        }
        Node* curr = left -> next;
        Node* right = curr -> next;

        //step2:
        left -> next = right;
        //step3:
        right -> prev = left;
        //step4:
        curr -> next = NULL;
        curr ->prev = NULL;
        delete curr;


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
 cout<<endl;
 InsertAtTail(head,tail,501);
 print(head);
 cout<<endl;
     InsertAtMiddle(head,tail,432,3);
     print(head);
     cout<<endl;
     DeleteElement(head,tail,1); 
     cout<<endl;
     print(head);
   }