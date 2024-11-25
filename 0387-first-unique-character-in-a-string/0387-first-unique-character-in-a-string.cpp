class Solution {
public:
    int firstUniqChar(string s) {
        int size=s.size();
        int index;
        bool isuniq;
        for (int i=0;i<size;i++)
        {      isuniq=true;
            for (int j=0;j<size;j++)
            {
                if (s[i]==s[j] && i!=j)
                {
                    isuniq=false;
                    break;
                }
            }
            if (isuniq)
            {
                index=i;
                return index;
                break;
            }
        }
        return -1;

    }
};