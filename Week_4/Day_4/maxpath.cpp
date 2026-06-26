class Solution {
public:
    int maxi;

    int solve(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left = solve(root->left);
        int right = solve(root->right);

        left = max(left, 0);
        right = max(right, 0);

        maxi = max(maxi, left + right + root->val);

        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        maxi = INT_MIN;
        solve(root);
        return maxi;
    }
};
