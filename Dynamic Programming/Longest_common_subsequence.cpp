class Solution {
public:
    /**
     * @param A: A string
     * @param B: A string
     * @return: The length of longest common subsequence of A and B
     */
    int longestCommonSubsequence(string &A, string &B) {
        // write your code here
        int n = A.length();
        int m = B.length();
        int dp[n][m];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(A[i]==B[j])
                {
                    if(i==0 || j==0)
                      dp[i][j] = 1;
                    else
                      dp[i][j] = 1+dp[i-1][j-1];
                }
                else
                {
                    if(i>0 && j>0)
                      dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                    else if(i==0 && j>0)
                      dp[i][j] = dp[i][j-1];
                    else if(i>0 && j==0)
                      dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n-1][m-1];
    }
};
