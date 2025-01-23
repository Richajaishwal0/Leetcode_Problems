class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sizee=nums.size();
        int sum=sizee*(sizee+1)/2;
        int suma=0;
        for (int i=0;i<sizee;i++)
        {
            suma+=nums[i];
        }
        return sum-suma;
    }
};