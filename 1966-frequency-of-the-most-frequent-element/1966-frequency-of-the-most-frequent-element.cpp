class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0,right=0;
        int length=0,max_=0;
        long long  total=0;
        sort(nums.begin(),nums.end());
        while (right<n)
        {
            total+=nums[right];
            length=right-left+1;
            while ( left<=right && (long long )nums[right]*length>k+total)
            {
                
                total-=nums[left];
                left++;
                length--;
            }
            max_=max(max_,length);
            right++;
        }
        return max_;
    }
};