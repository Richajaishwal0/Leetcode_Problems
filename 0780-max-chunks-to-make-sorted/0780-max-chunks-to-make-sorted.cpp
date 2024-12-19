class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int max_=0;
        int chunk=0;
        for (int i=0;i<n;i++)
        {
            max_=max(max_,arr[i]);
             if (max_==i){
                chunk++;
            }
        }
        return chunk;
    }
};