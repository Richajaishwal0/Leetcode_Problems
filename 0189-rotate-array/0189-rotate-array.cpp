class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (nums.size()==1) return;
        vector <int> ans(nums.size(),0);
         for (int i=0;i<k;i++)
        {
            ans[i]=nums[nums.size()-k+i];
        }
        for (int i=0;i<nums.size()-k;i++)
        {
            ans[i+k]=nums[i];
        }
       
        nums=ans;
    }
};