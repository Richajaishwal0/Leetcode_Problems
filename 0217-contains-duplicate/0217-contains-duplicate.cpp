class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size=nums.size();
        bool isdup=false;
        sort(nums.begin(),nums.end());
        for (int i=0;i<size-1;i++)
        {
                if (nums[i]==nums[i+1])
                {
                    isdup=true;
                    break;
                }
        }
        return isdup;
    }
};