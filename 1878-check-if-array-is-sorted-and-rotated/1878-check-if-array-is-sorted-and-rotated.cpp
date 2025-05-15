class Solution {
public:
    bool check(vector<int>& nums) {
        int culp=0;
        for (int i=1;i<nums.size();i++)
        {
            if (nums[i]<nums[i-1]) culp++;
        }
        if (nums[nums.size()-1]> nums[0]) culp++;
        return culp <=1;
    }
};