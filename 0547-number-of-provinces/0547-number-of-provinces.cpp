class Solution {
public:
    void Connection(int i, vector<bool> &visited, vector<vector<int>> &adjlst)
    {
        visited[i]=true;
        for (int x: adjlst[i])
        {
            if (!visited[x])
            {
                Connection(x,visited,adjlst);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector <vector<int>> adjlst(isConnected.size());
        for (int i=0;i<isConnected.size();i++)
        {
            for (int j=0;j<isConnected[i].size();j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    adjlst[i].push_back(j);
                    adjlst[j].push_back(i);
                }
                
            }
        }
        int count=0;
        vector <bool> visited(adjlst.size(),false);
        for (int i=0;i<adjlst.size();i++)
        {
            if (!visited[i])
            {
                count++;
                Connection(i,visited,adjlst);
            }
        }
        return count;
    }
};