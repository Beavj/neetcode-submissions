class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0; i < n; i++){
            mp[nums[i]]++;
        }
        vector<std::pair<int, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });
        // for(auto x : mp){
        // //   cout<<x.first<<"->"<<x.second<<endl;
        //   if(ans.size()<k ){
        //       ans.push_back(x.first);
        //   }
        // }
        for(auto &x : vec){
            if(ans.size()<k){
            ans.push_back(x.first);
            }
        }
    return ans;
    }
};
