#include <bits/stdc++.h>
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void rln(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;
    rln(root->left, ans);
    rln(root->right, ans);
    ans.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    rln(root, ans);
    return ans;
}