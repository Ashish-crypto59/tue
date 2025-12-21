class Solution {
    public int majorityElement(int[] nums) {
      Arrays.sort(nums);
      int a = nums.length;
      return nums[a/2];  
    }
}