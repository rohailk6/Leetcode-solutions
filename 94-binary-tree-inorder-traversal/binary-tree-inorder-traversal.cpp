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
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> result;
        
        TreeNode* temp = root;
        if(root == NULL) return result;
            vector<int> left = inorderTraversal(temp->left);
            result.insert(result.end() , left.begin() , left.end());
            result.push_back(root->val);
            vector<int> right = inorderTraversal(temp->right);
            result.insert(result.end(), right.begin(), right.end());
        
        return result;
    }
};