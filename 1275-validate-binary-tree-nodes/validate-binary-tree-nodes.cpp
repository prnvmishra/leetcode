class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        
        vector<int> indegree(n, 0);
        
        // Step 1: Count parents
        for(int i = 0; i < n; i++) {
            if(leftChild[i] != -1) {
                indegree[leftChild[i]]++;
                if(indegree[leftChild[i]] > 1) return false;
            }
            if(rightChild[i] != -1) {
                indegree[rightChild[i]]++;
                if(indegree[rightChild[i]] > 1) return false;
            }
        }
        
        // Step 2: Find root
        int root = -1;
        for(int i = 0; i < n; i++) {
            if(indegree[i] == 0) {
                if(root != -1) return false; // multiple roots
                root = i;
            }
        }
        
        if(root == -1) return false; // no root
        
        // Step 3: BFS
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(root);
        visited[root] = true;
        
        int count = 0;
        
        while(!q.empty()) {
            int node = q.front(); q.pop();
            count++;
            
            if(leftChild[node] != -1) {
                if(visited[leftChild[node]]) return false; // cycle
                visited[leftChild[node]] = true;
                q.push(leftChild[node]);
            }
            
            if(rightChild[node] != -1) {
                if(visited[rightChild[node]]) return false;
                visited[rightChild[node]] = true;
                q.push(rightChild[node]);
            }
        }
        
        return count == n;
    }
};