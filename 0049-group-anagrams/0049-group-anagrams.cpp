class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>> map;
     string sr;
     vector <vector<string>> vec;
     for (string s:strs)
     {  sr=s;
        sort(s.begin(),s.end());
        map[s].push_back(sr);
     }
     for (auto &it: map)
     {
        vec.push_back(it.second);
     }
    return vec;
    }
};
