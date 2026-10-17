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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        solve(root, ans,"" );
        return ans;
    }

    void solve(TreeNode * node, vector<string> & ans,string str){
        if(!node){
            return;
        }
        str += to_string(node ->val);

        if(!node ->left && !node -> right){
            ans.push_back(str);
            return;
        }
        str += "->";
        solve(node -> left, ans, str);
        solve (node -> right, ans , str);
    }
};