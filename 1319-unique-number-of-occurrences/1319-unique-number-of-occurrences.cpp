class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        vector<int> visited(n,false);
        int count=0;
        vector <int> freq;
        for (int i=0;i<n;i++)
        {
            if (visited[i])
            {
                continue;
            }
            count=0;
            for (int j=i+1;j<n;j++)
            {
                if (arr[i]==arr[j])
                {
                    visited[j]=true;
                    count++;
                }
            }
            freq.push_back(count);
        }
        for (int i=0;i<freq.size();i++)
        {
            for (int j=i+1;j<freq.size();j++)
            {
                if (freq[i]==freq[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};