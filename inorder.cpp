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
void lnr(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;
    lnr(root->left, ans);
    ans.push_back(root->data);
    lnr(root->right, ans);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    lnr(root, ans);
    return ans;
}