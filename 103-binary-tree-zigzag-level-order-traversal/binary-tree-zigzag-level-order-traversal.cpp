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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root==nullptr) return ans;
        bool lefttoright = true;

        q.push(root);
        while(!q.empty()){
            int level_size = q.size();
            vector<int> temp(level_size);
                int first = 0 ;
                int last = level_size - 1;

            while (level_size--){
                TreeNode* t = q.front();
                q.pop();
                

            
                if(lefttoright == 1){
                    temp[first]=t->val;
                    first++;

                }
                else{
                    temp[last] = t->val;
                    last--;
                }

                if(t->left!=NULL){
                    q.push(t->left);
                }
                if(t->right!=NULL){
                    q.push(t->right);
                }
            }
            

                ans.push_back(temp);
                lefttoright= !lefttoright;
            





                
            
        }

        return ans;

        
    }
};