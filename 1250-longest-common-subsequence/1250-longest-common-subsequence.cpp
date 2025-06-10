class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        int dp[n+1][m+1];
        
        for(int i = 0; i < n+1; i++) {
            for(int j = 0; j < m+1; j++) {
                dp[i][j] = 0;
            }
        }
        
        for(int i = 1; i < n+1; i++) {
            for(int j = 1; j < m+1; j++) {
                if(text1[j-1] == text2[i-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    int ans1 = dp[i-1][j];
                    int ans2 = dp[i][j-1];
                    dp[i][j] = max(ans1, ans2);
                }
            }
        }
        
        return dp[n][m];
    }
};