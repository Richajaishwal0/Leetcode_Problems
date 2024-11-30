class Solution {
public:
    int singleNumber(vector<int>& nums) {
        stack <int> st;
        int a;
        int n =nums.size();
        sort(nums.begin(),nums.end());
        for (int i=0;i<n;i++)
        {
            if (!st.empty() && st.top()==nums[i])
            {
                st.pop();
            }
            else{
                st.push(nums[i]);
            }
        }
        if (!st.empty())
        {  a=st.top();
            st.pop();
        }
       else
            {
            a=-1;
        }
        return a;
    }
};