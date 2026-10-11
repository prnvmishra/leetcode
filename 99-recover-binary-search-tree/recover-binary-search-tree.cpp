
class Solution {
public:
    TreeNode* prev = nullptr;
    TreeNode* g1 = nullptr;
    TreeNode* g2 = nullptr;
    TreeNode* g3 = nullptr;
    TreeNode* g4 = nullptr;
    int galat = 0;

    void solve(TreeNode* root) {
        if (root == nullptr) return;

        solve(root->left);

        if (prev != nullptr && root->val < prev->val) {
            if (galat == 0) {
                g1 = prev;
                g2 = root;
                galat++;
            }
            else {
                g3 = prev;
                g4 = root;
                galat++;
            }
        }

        prev = root;

        solve(root->right);
    }

    void recoverTree(TreeNode* root) {
       

        solve(root);

        if (galat == 1) {
            swap(g1->val, g2->val);
        }
        else if (galat == 2) {
            swap(g1->val, g4->val);
        }
    }
};
