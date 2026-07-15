class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        vector<int> freq(26,0);
        int l=0 , maxL = INT_MIN, len=0;
        
        for(int r = 0; r < n; r++)
        {
            freq[s[r]-'A']++;
            len = max(len, freq[s[r]-'A']);

            while(((r-l+1)-len)>k){
                 freq[s[l]-'A']--;
                 l++;
            }
             maxL = max(maxL, r-l+1);
        }
       
      return maxL;
    }
    
};
