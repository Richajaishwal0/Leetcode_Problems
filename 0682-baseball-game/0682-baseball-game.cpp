class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        vector <int> vec;
        // stack <int> st;
        for (int i=0;i<n;i++)
        {
            if (operations[i]=="+")
            {
                int last=vec.back();
                vec.pop_back();
                int sec_last=vec.back();
                int sum=last+sec_last;
                vec.push_back(last);
                vec.push_back(sum);

            }
            else if (operations[i]=="C")
            {
                vec.pop_back();
            }
            else if (operations[i]=="D")
            {
                int last=vec.back();
                vec.push_back(2*last);
            }
            else {
                vec.push_back(stoi(operations[i]));
            }
        }
        int sum=accumulate(vec.begin(),vec.end(),0);
        return sum;
    }
};