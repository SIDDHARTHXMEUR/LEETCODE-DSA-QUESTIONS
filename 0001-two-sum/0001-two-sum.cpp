class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            // Find the number needed to reach the target
            int complement = target - nums[i];

            // Check if the required number already exists
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            // Store the current number and its index
            mp[nums[i]] = i;
        }

        return {};
    }
};