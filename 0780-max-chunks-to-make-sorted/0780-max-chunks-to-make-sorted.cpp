class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        long long  sum1=0;
        long long sum2=0;
        int cnt=0;
        vector <int> t=arr;
        sort(t.begin(),t.end());
        for (int i=0;i<n;i++)
        {
            sum1+=t[i];
            sum2+=arr[i];
            if (sum1==sum2)
            {
                cnt++;
            }
        }
        return cnt;
    }
};