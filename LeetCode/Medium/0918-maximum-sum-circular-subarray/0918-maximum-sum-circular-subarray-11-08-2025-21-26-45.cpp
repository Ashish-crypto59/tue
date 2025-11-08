class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0;
        int max_sum=nums[0];
        int min_sum=nums[0];
        int cur_max=0;
        int cur_min=0;
        for(int num:nums){
            total+=num;
            cur_max=max(num,cur_max+num);
            max_sum=max(max_sum,cur_max);
            cur_min=min(num,cur_min+num);
            min_sum=min(min_sum,cur_min);
        }
        if(max_sum<0) return max_sum;
        return max(max_sum,total-min_sum);
    }
};