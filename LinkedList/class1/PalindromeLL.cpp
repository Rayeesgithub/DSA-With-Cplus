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
Node* getMiddle(Node* &head){
    // If empty linked list
    if(head == NULL){
        cout<<"Linked List is empty";
        return head;
    }
    // Only one node in the linked list
    if(head -> next == NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head; // n/2 + 1 will be the answer
    // Node* fast = head->next;  // If we want n/2 as the answer
    // slow and fast are valid
    while(slow!=NULL && fast!=NULL){
        fast = fast->next; // move 1 step
        if(fast!=NULL){ // check if fast becomes null
            fast = fast->next; // if not null, then simply move 1 step more and hence in total 2 steps
            slow = slow->next; // move 1 step
        }
    }
    return slow; // return slow which will be the middle node
}
// reverse the linked list
Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;
   while (curr!=NULL)
   {
    next=curr->next;
    curr->next=prev;
   prev=curr;
   curr=next;
   }
   return prev;
    
}

 bool checkPalindrome(Node* &head){
     // Empty Linked List
    if(head == NULL){
        return true;
    }
    // Single Node is always a palindrome
    if(head->next == NULL){
        return true;
    }
    // Step - 1 Find the middle node
    Node* middle = getMiddle(head);
    // Step - 2 Reverse the Linked List after the middle node
    Node* reverseLLHead = reverse(middle->next);
    middle -> next = reverseLLHead;
    // Step - 3 Compare both the linked list before middle and after the middle
    Node* temp = head;
    Node* temp1 = reverseLLHead;
    while(temp1!=NULL){
        if(temp->data != temp1->data){
            // Not a palindrome
            return false;
        }
        temp = temp->next;
        temp1 = temp1->next;
    }
    return true;
}
int main(){
    Node* head=new Node(10);
     Node* second=new Node(20);
      Node* third=new Node(300);
       Node* fourth=new Node(20);
       Node* fifth=new Node(10);
        // Node* sixth=new Node(10);
        // Node* seven=new Node(10);
      
      head->next=second;
      second->next=third;
      third->next=fourth;
      fourth->next=fifth;
    //   fifth->next=sixth;
      bool isPalindrome=checkPalindrome(head);
      if (isPalindrome)
      {
    cout<<"This is Palindrome";
      }
      else{
        cout<<"this is Not palindrome";
      }
      
}