class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int st=0;
       int end=1;
       if (nums.size()==2) {
        if (nums[st]==0 && nums[end]!=0)
        {
            swap(nums[st],nums[end]);
        }
        return;
       }
       while (end<nums.size())
       {
        if (nums[st]==0 && nums[end]!=0)
        {
            swap(nums[st],nums[end]);
            st++;
            end++;
        }
        else if (nums[st]==0 && nums[end]==0)
        {
            end++;
        }
         else
         {
            st++;
            end++;}
       }
    }
};