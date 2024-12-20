class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        unordered_map<int,int> map;
        for (int i=0;i<n;i++)
        {
            if (map.find(nums[i])==map.end())
            {
                map[nums[i]]=1;
            }
            else
            {
                    map[nums[i]]+=1;
            }
        }
        for (auto i:map)
        {
            if (i.second==1)
            {
                ans=i.first;
            }
        }
        return ans;
    }
};