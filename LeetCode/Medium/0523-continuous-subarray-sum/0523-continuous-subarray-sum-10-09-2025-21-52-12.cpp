class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mod_map;
        mod_map[0]=-1;
        int prefix_sum=0;
        for(int i=0;i<nums.size();++i){
            prefix_sum+=nums[i];
            if(k!=0){
                prefix_sum%=k;
            }
            if (mod_map.count(prefix_sum)){
                if(i-mod_map[prefix_sum]>=2){
                    return true;
                }
            }
            else{
                mod_map[prefix_sum]=i;
            }
        }
        return false;
    }
};