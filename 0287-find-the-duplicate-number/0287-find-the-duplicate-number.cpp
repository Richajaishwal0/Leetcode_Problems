class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (int i=1;i<nums.size();i++)
        {
            if (nums[i]==nums[i-1])
            {
                return nums[i];
            }
        }
        return 0;
    }  

    // unordered_map <int,int> set;
    // for (int i=0;i<nums.size();i++)
    // {
    //     if (set.find(nums[i])!=set.end())
    //     {
    //         set[nums[i]]++;;
    //     }
    //     else{
    //         set[nums[i]]=1;
    //     }

    // }
    // for (auto &i:set)
    // {
    //     if(i.second>=2)
    //     {
    //         return i.first;
    //     }
    // }
    // return 0;
    // } using hashmap O(n)
};
