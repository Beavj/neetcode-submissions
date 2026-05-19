class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        bool flag = false;
        int n = nums.size();
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto & it : mp){
            if(it.second>1){
                flag = true;
            }
        }
        return flag;
    }
};