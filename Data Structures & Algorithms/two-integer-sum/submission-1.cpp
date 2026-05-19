class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {

        int complement = target - nums[i];

        if (mp.find(complement) != mp.end()) {

            int first = mp[complement];
            int second = i;
            if (first < second)
                return {first, second};
            else
                return {second, first};
        }
        mp[nums[i]] = i;
    }

    return {};
    }
};
