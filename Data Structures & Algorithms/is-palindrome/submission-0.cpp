class Solution {
public:
    bool isPalindrome(string s) {
        bool ans = true;
       s.erase(remove(s.begin(), s.end(), ' '), s.end());
        int l = 0;
       
         for(char &ch : s)
           {
            ch = tolower(ch);
         } 
          string st = "";

          for(char ch : s)
           {
              if(isalnum(ch))
                {
                  st += ch;
              }
          }
            
          int r = st.size()-1;
        while(l<r){
            if(st[l]==st[r]){
                l++;
                r--;
            }
            else{
                ans = false;
                return ans;
            }
        }
        return ans;
    }
};
