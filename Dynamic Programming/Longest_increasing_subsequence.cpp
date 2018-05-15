class Solution {
public:
    /**
     * @param nums: An integer array
     * @return: The length of LIS (longest increasing subsequence)
     */
    int longestIncreasingSubsequence(vector<int> &nums) {
        // write your code here
        int n=nums.size(),max=0;
        if(n!=0)
        {
            int dp[n];
            dp[0]=1;
            for(int i=1;i<n;i++)
            {
                dp[i]=1;
                for(int j=0;j<i;j++)
                {
                    if(dp[i]<dp[j]+1 && nums[j]<nums[i])
                      dp[i]=dp[j]+1;
                }
                if(dp[i]>max)
                   max=dp[i];
            }
        }
        return max;
    }
};
