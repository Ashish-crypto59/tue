class Solution {
public:
    int minInsertions(string s) {
      string another=s;
      reverse(another.begin(),another.end());
      vector<vector<int>>dp(s.length()+1,vector<int>(another.length()+1,0));
      for(int i=1;i<s.length()+1;i++){
        for(int j=1;j<another.length()+1;j++){
            if(s[i-1]==another[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
      }  
      int insertion=another.length()-dp[s.length()][another.length()];
      return insertion;
    }
};