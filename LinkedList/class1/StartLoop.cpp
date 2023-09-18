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
Node* findStartLoop(Node* head){
     if (head==NULL)
    {
        cout<<"empty linklist"<<endl;
        return head;
    }
    // create a node jaha slow and fast dono head pr honge
    Node* slow=head;
    Node* fast=head;
    while (fast!=NULL)
    {
     fast=fast->next;
     if (fast!=NULL)
     {
        fast=fast->next;
        slow=slow->next;
     }
      // jb slow and fast equal ho jaye toh slow pointer ko head pr rkh denge
     if (slow==fast)
     {
      slow=head;
      break;
     }
}
// jab tk slow and fast equal na ho
while (slow!=fast)
{
     // Move both by 1 step
   fast=fast->next;
   slow=slow->next;
}
// here we freedom to slow and fast both can return
// return fast;
return slow;
}

int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    Node* seven=new Node(70);
    Node* eight=new Node(80);
    Node* nine=new Node(90);
     head->next=second;
     second->next=third;
     third->next=fourth;
     fourth->next=fifth;
     fifth->next=sixth;
     sixth->next=seven;
     seven->next=eight;
     eight->next=nine;
     nine->next=seven;
     cout<<"starting loop is:"<<findStartLoop(head)->data;
     return 0;
}