class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>>mp;
        
        int n = strs.size();
        for(int i=0; i<n; i++)
        {
            vector<int>Freq(26,0);
            int m = strs[i].size();
            for(int j = 0; j < m; j++)
            {
                Freq[strs[i][j]-'a']++;
            }
            string key = "";
            for(int k = 0; k < 26; k++)
            {
                key += "#";
                key+=to_string(Freq[k]);
                
            }
            mp[key].push_back(strs[i]);
        }
       for(auto &it : mp)
       {
          ans.push_back(it.second);
       }
       return ans;
    }
};
