class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        bool ispre;
        int num;
        for (int i=0;i<size+1;i++)
        {    ispre=false;
            for (int j=0;j<size;j++)
            {
                if (i==nums[j])
                {
                    ispre=true;
                    break;
                }
            }
            if (!ispre)
            {
                num=i;
            }
        }
        return num;
    }
};