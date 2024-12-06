class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set <int>set(banned.begin(),banned.end());
        int count=0;
        int sum=0;
        for (int i=1;i<=n;i++)
        {  
            if (set.count(i)) continue;
            sum+=i;
            if (sum>maxSum) break;
            count++; 
        }
      
        return count;

    }
};