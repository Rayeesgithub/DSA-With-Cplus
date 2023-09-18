#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // simple constructor
    Node(){
        this->data=0;
        this->next=NULL;
    }
    // prametrizied constructor
    Node(int data){
        this->data=data;
        this->next=NULL;

    }
   
};
// i want  to insert a node right at head oflinkedlist
void InsertAtHead(Node* &head,int data){
    // step1 create a node
    Node* newNode=new Node(data);
    // step2 newnode ko head se attach
    newNode->next=head;
    //step 3 head ko newnode pr wapas
    head=newNode;

}
 void print(Node* head){
        Node*temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
    }
int main(){
    //Node n;
   Node*head=NULL;
   InsertAtHead(head,20);
   InsertAtHead(head,50);
   InsertAtHead(head,60);
   InsertAtHead(head,90);

    cout<<"print all lilnkedlist"<<endl;
    print(head);
    return 0;
    }