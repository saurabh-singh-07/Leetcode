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
    int target;
    bool hasPathSum(TreeNode* root, int targetSum) {
        target = targetSum;
        return helper(root, 0);
    }

    bool helper(TreeNode * node, int sum){
        if(!node) return false;
        sum += node -> val;
        if(node -> left == nullptr && node -> right == nullptr){
            return sum == target;
        }
        int lans = helper(node -> left , sum);
        int rans = helper(node -> right , sum);
        return lans || rans;
    }
};