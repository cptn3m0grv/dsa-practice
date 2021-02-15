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
    void helper(TreeNode* root, vector<int> &V){
        if(root==nullptr){
            return;
        }
        helper(root->left, V);
        V.push_back(root->val);
        helper(root->right, V);
        return;
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int> V;
        helper(root, V);
        bool ans = true;
        for(int i=1;i<V.size();++i){
            ans&=(V[i-1]<V[i]);
            if(!ans){
                return false;
            }
        }
        return true;
    }
};
