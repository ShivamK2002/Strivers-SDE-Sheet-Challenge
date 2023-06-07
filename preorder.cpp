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
void nlr(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;
    ans.push_back(root->data);
    nlr(root->left, ans);
    nlr(root->right, ans);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    nlr(root, ans);
    return ans;
}