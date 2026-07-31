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

    void allPaths(TreeNode* root,int path,vector<int> &ans){

        if(!root) return;

        path = path * 10 + root->val;

        if(root->left == NULL && root->right == NULL){
            ans.push_back(path);
            return;
        }
        if(root->left){
         allPaths(root->left,path, ans);
        }
        if(root->right){
         allPaths(root->right,path, ans);
        }
    }
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;

        vector<int> ans;
        allPaths(root,0,ans);

        int sum = 0;
        for(int num : ans){
            sum += num;
        }
        return sum;
    }
};