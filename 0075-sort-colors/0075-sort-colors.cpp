class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int curr=0;
        int end=n-1;
        while (curr<=end)
        {
            if (nums[curr]==0)
            {
                swap(nums[st],nums[curr]);
                st++;
                curr++;
            }
            else if (nums[curr]==1)
            {   curr++;
                
            }
            else if (nums[curr]==2) {
                swap(nums[end],nums[curr]);
                end--;
            }
        }
    }
};