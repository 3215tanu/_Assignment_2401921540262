class Codec {
public:

    
    string serialize(TreeNode* root) {

        if (root == nullptr)
            return "";

        string ans;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* curr = q.front();
            q.pop();

            if (curr == nullptr) {
                ans += "N,";
            } else {
                ans += to_string(curr->val) + ",";
                q.push(curr->left);
                q.push(curr->right);
            }
        }

        return ans;
    }

   
    TreeNode* deserialize(string data) {

        if (data.empty())
            return nullptr;

        stringstream ss(data);
        string val;

        getline(ss, val, ',');
        TreeNode* root = new TreeNode(stoi(val));

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {

            TreeNode* parent = q.front();
            q.pop();

           
            if (getline(ss, val, ',')) {
                if (val != "N") {
                    parent->left = new TreeNode(stoi(val));
                    q.push(parent->left);
                }
            }


          
            if (getline(ss, val, ',')) {
                if (val != "N") {
                    parent->right = new TreeNode(stoi(val));
                    q.push(parent->right);
                }
            }
        }

        return root;
    }
};
