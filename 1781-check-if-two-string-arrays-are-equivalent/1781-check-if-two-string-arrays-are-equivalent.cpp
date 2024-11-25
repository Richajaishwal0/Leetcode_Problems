class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        bool issame;
        int size1=word1.size();
        int size2=word2.size();
        string sum1="";
        string sum2="";
        for (int i=0;i<size1;i++)
        {
            sum1+=word1[i];
        }
         for (int i=0;i<size2;i++)
        {
            sum2+=word2[i];
        }
        if (sum1==sum2)
        {
            issame=true;
        }
        else {
            issame=false;
        }
        return issame;
    }
};