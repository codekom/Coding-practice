class Solution {
public:
    /**
     * @param word1: A string
     * @param word2: A string
     * @return: The minimum number of steps.
     */
    int minDistance(string &word1, string &word2) {
        // write your code here
        int n = word1.length();
        int m = word2.length();
        if(n==0)
           return m;
        else if(m==0)
           return n;
        else
        {
            int dp[n+1][m+1];
            memset(dp,0,sizeof(dp));
            for(int i=0;i<n+1;i++)
            {
                for(int j=0;j<m+1;j++)
                {
                    if(i==0)
                        dp[i][j]=j;
                    else if(j==0)
                        dp[i][j]=i;
                    else if(word1[i-1]==word2[j-1])
                       dp[i][j] = dp[i-1][j-1];
                    else
                       dp[i][j]= 1 + min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                }
            }
            return dp[n][m];
        }
    }
};
