Node* Merge(Node* left, Node* right){
   
Node* temp=new Node(-1);
Node* ans=temp;
  if (left == NULL) {
            return right;
        }
        if (right == NULL) {
            return left;
        }
while(left!=NULL && right!=NULL){
    if(left->data<=right->data){
        temp->bottom =left; 
            temp = temp->bottom; 
            left = left->bottom; 
    }
    else{
        temp->bottom=right;
        temp=temp->bottom;
        right=right->bottom;
    }
}
 if (left != NULL) {
        temp->bottom = left;  // Use 'bottom' instead of 'next'
    }
    if (right != NULL) {
        temp->bottom = right; // Use 'bottom' instead of 'next'
    }

    return ans->bottom; //
}
Node *flatten(Node *root)
{
  if(root==NULL || root->next==NULL){
      return root;
  }
  Node* mergeLL=Merge(root,flatten(root->next));
  return mergeLL;
}
