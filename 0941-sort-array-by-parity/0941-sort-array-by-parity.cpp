class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        while (st<=end)
        {
            if (nums[st]%2==0)
            {
                st++;
            }
            else
            {
                swap(nums[st],nums[end]);
                end--;
            }
        }
        return nums;
    }
};