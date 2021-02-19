/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> V;
        if(root==NULL){
            return V;
        }
        
        queue<TreeNode *> Q;
        Q.push(root);
        TreeNode *temp = NULL;
        vector<int> level;
        while(!Q.empty()){
            int n = Q.size();
            level.clear();
            for(int i=1;i<=n;++i){
                temp = Q.front();
                Q.pop();
                
                level.push_back(temp->val);
                
                if(temp->left){
                    Q.push(temp->left);
                }
                
                if(temp->right){
                    Q.push(temp->right);
                }
            }
            V.push_back(level);
        }
        
        return V;
    }
};
