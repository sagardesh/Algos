/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {     
        if(root == NULL){
            return true;
        }
        
        return (isValidBSTHelper(root->left,root->val,INT_MIN) && isValidBSTHelper(root->right,INT_MAX,root->val));
    }
    
    bool isValidBSTHelper(TreeNode* root,int max,int min){
        if(root == NULL){
            return true;
        }
        
        if((min >= root->val && root->val != INT_MIN) || (root->val >= max && root->val != INT_MAX))
            return false;
        

        return (isValidBSTHelper(root->left,root->val,min) && isValidBSTHelper(root->right,max,root->val));
    }
};