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
    int mini;
    int maxi;
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        mini = low;
        maxi = high;
        inorder(root , sum);
        return sum;
    }

    void inorder(TreeNode * root, int & sum){
        if(!root) return ;

        inorder(root-> left , sum);

        if(root -> val>= mini && root -> val <= maxi) sum += root -> val;

        inorder(root -> right, sum);
    }
};