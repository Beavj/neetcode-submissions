class Solution {
public:
    string minWindow(string s, string t) {
      int n = s.size();
        int m = t.size();
        if (s.empty() || t.empty() || n < m) {
            return "";
        }
        
        vector<int> freq(128, 0);
        for(int i = 0; i < m; i++) {
            freq[t[i]]++;
        }

        int l = 0;
        int r = 0;
        int ans = INT_MAX;
        int minStart = 0;
        int required = m; 

        while(r < n) {
            if(freq[s[r]] > 0) {
                required--;   
            }
        
            freq[s[r]]--; 
            r++;
            while(required == 0) {
                if (r - l < ans) {
                    ans = r - l;
                    minStart = l;
                }
                freq[s[l]]++;          
                if (freq[s[l]] > 0) {
                    required++;
                }
                l++;
            }
        }
        
        return ans == INT_MAX ? "" : s.substr(minStart, ans);
    }
};
