class Solution {
public:
    bool isMatch(string s, string p) {

    int m = s.length();
    int n = p.length();
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
    dp[0][0] = true;
    for (int j = 1; j <= n; j++) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 2]; 
        }
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == s[i - 1] || p[j - 1] == '.') {
                dp[i][j] = dp[i - 1][j - 1]; 
            } else if (p[j - 1] == '*') {
                dp[i][j] = dp[i][j - 2];
                if (p[j - 2] == s[i - 1] || p[j - 2] == '.') {
                    dp[i][j] = dp[i][j] || dp[i - 1][j];
                }
            }
        }
    }

    return dp[m][n];
}

int main() {
    string s1 = "aa";
    string p1 = "a";
    cout << boolalpha << isMatch(s1, p1) << endl;

    string s2 = "aa";
    string p2 = "a*";
    cout << boolalpha << isMatch(s2, p2) << endl;

    string s3 = "ab";
    string p3 = ".*";
    cout << boolalpha << isMatch(s3, p3) << endl; 

    return 0;
  
    }
};