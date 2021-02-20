void connect(Node *root)
{
   // Your Code Here
   if(root==NULL){
       return;
   }
   
   queue<Node*> Q;
   Q.push(root);
   Q.push(NULL);
   Node *temp = NULL;
   while(!Q.empty()){
       temp = Q.front();
       Q.pop();
       
       if(temp!=NULL){
           temp->nextRight = Q.front();
           if(temp->left){ Q.push(temp->left); }
           if(temp->right){ Q.push(temp->right); }
       }else if(!Q.empty()){
           Q.push(NULL);
       }
   }
}

