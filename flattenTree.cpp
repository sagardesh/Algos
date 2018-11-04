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
    void flatten(TreeNode* root) {
        if (root == NULL || (!root->left && !root->right)){
		return;
	}

	if (root->left) {
		TreeNode* tempRight = root->right;

		root->right = root->left;
		root->left = NULL;

		TreeNode* t = root->right;

		while (t->right) {
			t = t->right;
		}

		t->right = tempRight;
	}

	flatten(root->right);
    }
    
    
};