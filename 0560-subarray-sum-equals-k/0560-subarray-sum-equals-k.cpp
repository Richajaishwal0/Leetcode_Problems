class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int preSum=0;
        unordered_map <int,int> mapp;
        mapp[0]=1;
     
        for (int i=0;i<nums.size();i++)
        {
            preSum+=nums[i];
            int remove=preSum-k;
            count+=mapp[remove];
            mapp[preSum]+=1;
            
        }
        return count;
    }
};