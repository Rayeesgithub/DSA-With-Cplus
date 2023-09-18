#include<iostream>
using namespace std;
class Node{
 public:
 int data;
 Node* next;
 Node(){
    this->data=data;
    this->next=NULL;
 }
 Node(int data){
    this->data=data;
    this->next=NULL;
 }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtHead(Node*&head,Node* &tail,int data){
    if (head==NULL)
    {
      Node* newnode=new Node(data);
      head=newnode;
      tail=newnode;
      return;
    }
   
        Node* newnode=new Node(data);
        newnode->next=head;
        head=newnode;
    
}
// recursive Method
 Node* ReverseRecursive(Node* &prev,Node* &curr){
 // base case
 if (curr==NULL)
 {
    return prev;
 }
 // 1case solve 
 Node* right=curr->next;
 curr->next=prev;
 // baki recursion
 return ReverseRecursive(curr,right);
  }
  // iterative method
Node* ReverseLoop(Node* &prev,Node* &curr){
while (curr!=NULL)
{
   Node* right=curr->next;
   curr->next=prev;
   prev=curr;
   curr=right;
}
return prev;


}

int main(){
    Node* head = new Node(10);
    Node* tail = head;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);
    print(head);
    cout<<endl;
  Node* prev=NULL;
  Node* curr=head;
   head = ReverseRecursive(prev,curr);
//   head=ReverseLoop(prev,curr);
    print(head);
    cout<<endl;
}