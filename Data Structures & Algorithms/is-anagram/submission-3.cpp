class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> Freq(26,0);
        int n = s.size();
        int m = t.size();
        bool flag = true;
        for(int i=0; i<n; i++){
            Freq[s[i]-'a']++;
       }
       for(int i =0; i<m; i++){
        Freq[t[i]-'a']--;
       }
        for(auto &it :Freq){
            if(it!=0){
                flag = false;
            }
        }    
        return flag;   
    }
};
