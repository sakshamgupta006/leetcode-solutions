// Maximum Depth of Binary Tree


// Problem Link: https://leetcode.com/explore/interview/card/top-interview-questions-easy/94/trees/555/

// Solution

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
    int maxDepth(TreeNode* root) {
        if(root !=NULL)
        {
        if(root->left==NULL && root->right==NULL)
            return 1;
        int leftdepth = maxDepth(root->left);
        int rightdepth = maxDepth(root->right);
        return max(leftdepth, rightdepth)+1;
        }
        else
            return 0;
        
    }
};