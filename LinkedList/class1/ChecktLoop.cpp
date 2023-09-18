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
bool checkforLoop(Node* &head){
    if (head==NULL)
    {
        cout<<"empty linklist"<<endl;
        return false;
    }
    // create a node
    Node* slow=head;
    Node* fast=head;
    // jb fast null nhi hai toh fast ko ek step aage next kr denge
    while (fast!=NULL)
    {
     fast=fast->next;
     // jb fast null nhi hai toh slow and fast ko dono ek step aage 
     if (fast!=NULL)
     {
        fast=fast->next;
        slow=slow->next;
     }
       // loop is present
        if(slow == fast){
            return true;
        }
    }
    // loop is not present
    return false;
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
     nine->next=fifth;
    
    if (checkforLoop(head))
    {
      cout<<"Loop is present";
    }
    else{
        cout<<"Loop is absent"<<endl;
    }
}