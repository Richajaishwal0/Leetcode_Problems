class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
     unordered_map <int,int> mapp;
    //  for (int i=0;i<arr.size();i++)
    //  {
    //     mapp[arr[i]]=i;
    //  }   
     for (int i=0;i<arr.size();i++)
     {
        int part=target-arr[i];
        if (mapp.find(part)!=mapp.end())
        {
            return {mapp[part],i};
        }
        mapp[arr[i]]=i;
    }
    return {};
    }
};