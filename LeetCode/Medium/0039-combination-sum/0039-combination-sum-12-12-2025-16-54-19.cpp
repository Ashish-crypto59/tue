class Solution {
public:
    void sol(vector<int>& nums,int t,int sum,vector<int>& arr,vector<vector<int>>& ans,int i,int n){
        if(sum==t){
            ans.push_back(arr);
            return;
        }
        if(sum>t or i==n){
            return;
        }
        arr.push_back(nums[i]);
        sum+=nums[i];
        sol(nums,t,sum,arr,ans,i,n);
        sum-=nums[i];
        arr.pop_back();
        sol(nums,t,sum,arr,ans,i+1,n);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
       int i=0;
        vector<vector<int>> ans;
        vector<int> arr;
        int n=nums.size();
        int sum=0;
        sol(nums,target,sum,arr,ans,i,n);
        return ans;  
    }
};