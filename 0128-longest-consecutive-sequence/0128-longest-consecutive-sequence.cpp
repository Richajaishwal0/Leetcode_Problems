class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max_=1;
        int x;
        if (nums.size()==0) return 0;
        unordered_set <int> st(nums.begin(),nums.end());
        for (auto it: st)
        {
            if (st.find(it-1)==st.end())
            {
                count=1;
                x=it;
           
                while(st.find(x+1)!=st.end())
                {
                    x=x+1;
                    count++;

                }
                max_=max(count,max_);
            }
            
        }
        return max_;
    }
};