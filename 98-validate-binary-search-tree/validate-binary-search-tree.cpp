
class Solution {
public:
    TreeNode* prev = nullptr;
    bool ans = true;

    void ino(TreeNode* root) {
        if (root == nullptr) return;

        ino(root->left);

        if (prev != nullptr && root->val <= prev->val) {
            ans = false;
        }

        prev = root;

        ino(root->right);
    }

    bool isValidBST(TreeNode* root) {
        ino(root);
        return ans;
    }
};
