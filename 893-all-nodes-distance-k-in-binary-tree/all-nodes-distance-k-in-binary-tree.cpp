class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> parent;
    
    // Step 1: Build parent map
    void markParents(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            TreeNode* curr = q.front(); q.pop();
            
            if(curr->left) {
                parent[curr->left] = curr;
                q.push(curr->left);
            }
            
            if(curr->right) {
                parent[curr->right] = curr;
                q.push(curr->right);
            }
        }
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        markParents(root);
        
        unordered_map<TreeNode*, bool> visited;
        queue<TreeNode*> q;
        
        q.push(target);
        visited[target] = true;
        
        int dist = 0;
        
        while(!q.empty()) {
            int size = q.size();
            
            if(dist == k) break;
            dist++;
            
            for(int i = 0; i < size; i++) {
                TreeNode* curr = q.front(); q.pop();
                
                // left
                if(curr->left && !visited[curr->left]) {
                    q.push(curr->left);
                    visited[curr->left] = true;
                }
                
                // right
                if(curr->right && !visited[curr->right]) {
                    q.push(curr->right);
                    visited[curr->right] = true;
                }
                
                // parent
                if(parent[curr] && !visited[parent[curr]]) {
                    q.push(parent[curr]);
                    visited[parent[curr]] = true;
                }
            }
        }
        
        vector<int> ans;
        while(!q.empty()) {
            ans.push_back(q.front()->val);
            q.pop();
        }
        
        return ans;
    }
};