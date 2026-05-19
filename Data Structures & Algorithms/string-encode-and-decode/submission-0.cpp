class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (string str : strs) {

            result += to_string(str.size());

            result += '#';

            result += str;
        }

        return result;
    }

    vector<string> decode(string s) {
       vector<string> ans;

        int i = 0;

        while (i < s.size()) {

            int j = i;
            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));
            j++;
            string word = s.substr(j, len);

            ans.push_back(word);
            i = j + len;
        }

        return ans;
    }
};