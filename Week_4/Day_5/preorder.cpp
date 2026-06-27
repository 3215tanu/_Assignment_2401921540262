class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        if (preorder.empty())
            return nullptr;

        TreeNode* root = new TreeNode(preorder[0]);
        stack<TreeNode*> st;
        st.push(root);

        int inIndex = 0;

        for (int i = 1; i < preorder.size(); i++) {
            TreeNode* node = st.top();

            if (node->val != inorder[inIndex]) {
               
                node->left = new TreeNode(preorder[i]);
                st.push(node->left);
            } else {
               
                while (!st.empty() && st.top()->val == inorder[inIndex]) {
                    node = st.top();
                    st.pop();
                    inIndex++;
                }

                node->right = new TreeNode(preorder[i]);
                st.push(node->right);
            }
        }

        return root;
    }
};
