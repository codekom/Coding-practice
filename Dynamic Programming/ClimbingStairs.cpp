class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n =  cost.size();
        int i,j;
        int dp[n];
        dp[0]=0;
        if(n>1){
            dp[1]=min(cost[0],cost[1]);
            for(i=2;i<n;i++){
                dp[i]=min(dp[i-2]+cost[i-1],dp[i-1]+cost[i]);
            }
        }
        return dp[n-1];
    }
};
