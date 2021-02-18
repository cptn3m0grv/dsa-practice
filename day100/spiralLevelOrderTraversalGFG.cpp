struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

vector<int> findSpiral(Node *root)
{
    //Your code here
    if(root==NULL){
        return {};
    }
    vector<int> V;
    stack<Node *> st1;
    stack<Node *> st2;
    st1.push(root);
    while(!st1.empty()||!st2.empty()){
        while(!st1.empty()){
            Node *curr = st1.top();
            st1.pop();
            V.push_back(curr->data);
            
            if(curr->right){
                st2.push(curr->right);
            }
            if(curr->left){
                st2.push(curr->left);
            
            }
        }
        while(!st2.empty()){
            Node *curr = st2.top();
            st2.pop();
            V.push_back(curr->data);
            
            if(curr->left){ st1.push(curr->left); }
            if(curr->right){ st1.push(curr->right); }
        }
    }
    return V;
}
