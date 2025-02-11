class Solution {
public:
    bool topoSort(int i, stack<int>& s, vector<bool>& visited, vector<bool>& recStack, unordered_map<int, vector<int>>& mapp) {
        visited[i] = true;
        recStack[i] = true; 

        for (int x : mapp[i]) {
            if (!visited[x]) {
                if (topoSort(x, s, visited, recStack, mapp)) {
                    return true; 
                }
            } else if (recStack[x]) {
                return true; 
            }
        }

        recStack[i] = false;
        s.push(i);
        return false;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) {
        unordered_map<int, vector<int>> mapp;
        stack<int> s;
        vector<bool> visited(numCourses, false);
        vector<bool> recStack(numCourses, false); 

        for (auto& p : pre) {
            mapp[p[1]].push_back(p[0]);
        }

        // Perform DFS Topological Sort for all nodes
        for (int i = 0; i < numCourses; i++) {
            if (!visited[i]) {
                if (topoSort(i, s, visited, recStack, mapp)) {
                    return {}; // If cycle detected, return an empty vector
                }
            }
        }

        // Convert stack to result vector
        vector<int> adj;
        while (!s.empty()) {
            adj.push_back(s.top());
            s.pop();
        }

        return adj;
    }
};
