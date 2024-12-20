class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans;
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
                ans.push_back(i.first);
            }
        }
 return ans;
    }
};