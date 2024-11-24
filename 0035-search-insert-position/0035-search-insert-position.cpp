class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int start=0;
    int size=nums.size();
    int end=size-1;
    if(target > nums[end])
        {
            return end + 1;
        }
    int mid=0;
    while (start<=end)
    {
        mid=(start+end)/2;   
      if (target==nums[mid])
        {
            return mid;
        }     
        if (target<nums[mid])
        {
            end=mid-1;
        }
        if (target>nums[mid])
        {
            start=mid+1;
        }
    }
       return start;
    }
};