class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if(n>m) return false;

        vector<int> freq(26,0), temp(26,0);
        for(int i = 0; i < n; i++)
        {
            freq[s1[i]-'a']++;
            temp[s2[i]-'a']++;
        }
        int prev=0;
       if(freq==temp)
       return true;

       for(int i=n;i<m;i++)
       {
        temp[s2[i]-'a']++;
        temp[s2[prev]-'a']--;
        prev++;
         if(freq==temp)
         return true;
       }
    return false;
    }
};
