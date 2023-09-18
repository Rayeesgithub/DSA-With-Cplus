#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void RemoveDuplicate(Node* &head){
   if (head==NULL)
   {
    cout<<"this is empty LinkedList";
    return;
   }
   if (head->next==NULL)
   {
   return;
   }
   Node* curr=head;
   while (curr!=NULL)
   {
    if ((curr->next!=NULL)&&(curr->data==curr->next->data))
    { 
        // delate temp 
        Node* temp=curr->next;
        curr->next=curr->next->next;
        temp->next=NULL;
       delete temp;
    }
    else{
       curr=curr->next;
    }
   }
   
   
}
int main(){
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(2);
    Node* fourth=new Node(3);
    Node* fifth=new Node(4);
    Node* sixth=new Node(4);
    Node* seven=new Node(5);
    
     head->next=second;
     second->next=third;
     third->next=fourth;
     fourth->next=fifth;
     fifth->next=sixth;
     sixth->next=seven;
     
     cout<<"sorted LinkedList:";
     print(head);
     RemoveDuplicate(head);
     cout<<endl;
     cout<<"Remove Duplicate:";
     print(head);
}