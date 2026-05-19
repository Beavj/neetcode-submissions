class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
       vector<int> preSum(n);
       vector<int> suffSum(n);
       preSum[0] = nums[0];
       suffSum[0] = nums[n-1];
       vector<int> ans;
       for(int i = 1; i < n; i++)
       {
        preSum[i] = preSum[i-1] * nums[i];
        suffSum[i] = suffSum[i-1] * nums[n-i-1];
       }
       for(int i = 0; i < n; i++){
        long long left = (i == 0) ? 1 : preSum[i-1];
        long long right = (i == n-1) ? 1 : suffSum[n-i-2];
        ans.push_back(left * right);
       }
       return ans;
    }
};
