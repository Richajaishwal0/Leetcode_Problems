class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        int count1=size/2;
        int a;
        for (int i=0;i<size;i++)
        {
            int count=0;
            for (int j=0; j<size;j++)
            {
                if (nums[i]==nums[j])
                {
                    count+=1;
                }
            }
            if (count > count1)
            {
                a= nums[i];
                break;
            }
        }
        return a;
    }
};