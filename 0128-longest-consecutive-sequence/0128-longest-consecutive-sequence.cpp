class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int  max_=0;
        if (nums.size()==1) return 1;
        sort(nums.begin(),nums.end());
        int last_small=INT_MIN;
        int count=0;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]-1==last_small)
            {
                count++;
                last_small=nums[i];
            }
            else if (nums[i]!=last_small)
            {
                count=1;
                last_small=nums[i];
            }
            max_=max(count,max_);
        }
        return max_;
    }
};