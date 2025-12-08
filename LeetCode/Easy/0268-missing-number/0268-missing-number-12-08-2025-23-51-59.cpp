class Solution {
public:
int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum_n = (n * (n + 1)) / 2;
    int sum_nums = 0;
    for (int num : nums) {
        sum_nums += num;
    }
    return sum_n - sum_nums;
}
int main() {
    vector<int> nums1 = {3, 0, 1};
    vector<int> nums2 = {0, 1};
    vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << "Missing number in nums1: " << missingNumber(nums1) << endl;
    cout << "Missing number in nums2: " << missingNumber(nums2) << endl; 
    cout << "Missing number in nums3: " << missingNumber(nums3) << endl; 
    return 0;
    }
};