class Solution {
public:
    // perform dfs traversal
    int findCircleNum(vector<vector<int>>& v) {
        int n=v.size();
        vector<bool>visited(n,false);
       int ans=0;
        for (int i=0;i<n;i++)
        {
            if(!visited[i])
            {   
                ans++;
                 queue<int>q;
                 q.push(i);
                 visited[i]=1;
                 while (!q.empty())
                 {
                    int curr=q.front();
                    q.pop();
                    for (int j=0;j<n;j++)
                    {
                        if (v[curr][j]==1 && !visited[j])
                        {
                            visited[j]=true;
                            q.push(j);
                        }
                    }
                 }
            }
        }
        return ans;
    }
};