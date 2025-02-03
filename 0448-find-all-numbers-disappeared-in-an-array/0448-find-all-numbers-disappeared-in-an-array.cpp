class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <bool> visited(nums.size()+1,false);
        vector <int> vec;
       for (int i=0;i<nums.size();i++)
       {
        visited[nums[i]]=true;
       }
       for (int i=1;i<visited.size();i++)
       {
        if (visited[i]==false)
        {
            vec.push_back(i);
        }
       }
       return vec;
    }
};