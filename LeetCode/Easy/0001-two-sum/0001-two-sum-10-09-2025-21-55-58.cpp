class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
              unordered_map<int, int> num_dict;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (num_dict.find(complement) != num_dict.end()) {
                return {num_dict[complement], i};
            }
            num_dict[nums[i]] = i;
        }
        return {};

        
    }
};