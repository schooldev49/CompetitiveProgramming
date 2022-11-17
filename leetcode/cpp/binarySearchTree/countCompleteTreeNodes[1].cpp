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
 
 
 
 THIS IS THE UNOPTIMIZED BARE VERSION. I WANT TO USE DFS.
 */


class Solution {
public:
    int answer = 0; // declare
    int countNodes(TreeNode* root) {
        if (!root) return answer; // return if root null
        answer++; // inc
        if (root->left) countNodes(root->left); // locate left
        if (root->right) countNodes(root->right); // locate right
        return answer; // return
    }
};
