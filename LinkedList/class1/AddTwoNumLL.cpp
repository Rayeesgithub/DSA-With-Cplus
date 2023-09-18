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
// reverse
Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
Node *addSolve(Node* &head1,Node* &head2){
 if(head1 == NULL)
        return head2;
    if(head2 == NULL)
        return head1;
    // Step 1 Reverse both the linked lists
    head1 = reverse(head1);
    head2 = reverse(head2);
    // Step 2 Add both the linked lists
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carray = 0;
    // case1-jb head and tail both same lelngth ke hai
    while(head1!=NULL && head2!=NULL){
        // Find sum
        int sum = carray + head1->data + head2->data;
        // Find digit
        int digit = sum%10;
        // Find carry
        carray = sum/10;
        Node* newNode = new Node(digit);
        if(ansHead == NULL){
            // First node insert
            ansHead = newNode;
            ansTail = newNode;
        }
        else{
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
   // case2- jb head1 lenth ki length head2 ke list se jayada ho
   while(head1 != NULL){
        int sum = carray + head1->data;
        int digit = sum%10;
        carray = sum/10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }
    // case3- jb head2 lenth ki length head1 ke list se jayada ho
    while(head2 != NULL){
        int sum = carray + head2->data;
        int digit = sum%10;
        carray = sum/10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head2->next;
    }
    // Handle the carry alag se
    while(carray != 0){
        int sum = carray;
        int digit = sum % 10;
        carray = sum/10;
        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }
    // Step 3 Reverse the Linked List
    ansHead = reverse(ansHead);
    return ansHead;
}
int main(){
    // num1
      Node* head1 = new Node(5);
    Node* first = new Node(5);
    head1->next = first;
    
  // num2
 Node* head2 = new Node(8);
    Node* first1 = new Node(6);
    Node* second1 = new Node(8);
    head2->next = first1;
    first1->next = second1;

  Node* ans=addSolve(head1,head2);
  
  print(ans);

}