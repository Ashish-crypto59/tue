class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>n;
        for(auto x:nums){
           n[x]++;
        }
        for(auto x:n){
            if(x.second==1){
                return x.first;
            }
        }
        return -1;
    }
};