class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        std::vector<std::vector<int>>result;
        std::vector<int>combi;
        backtrack(1,combi,result,n,k);
        return result;
    }
    private:
     void backtrack(int start,std::vector<int>&combi,std::vector<std::vector<int>>& result,int n,int k){
        if(combi.size()==k){
            result.push_back(combi);
            return;
        }
        for(int num=start;num<=n;num++){
            combi.push_back(num);
            backtrack(num+1,combi,result,n,k);
            combi.pop_back();
        }
     }
};