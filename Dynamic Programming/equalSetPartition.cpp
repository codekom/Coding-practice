//GeeksForGeeks
#include<iostream>
using namespace std;
bool checkSubsetSum(int arr[],int n,int target)
{
    bool dp[n+1][target+1];
    for(int i=0;i<=target;i++){
        dp[0][i]=false;
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=true;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(dp[i-1][j]==1)
              dp[i][j]=true;
            else if(j>=arr[i] && dp[i-1][j-arr[i]]==1)
              dp[i][j]=true;
            else
              dp[i][j]=false;
        }
    }
    return dp[n][target];
}
int main()
{
	//code
	int t,n,sum;
	int arr[102];
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    sum = 0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	    }
	    if(sum%2!=0)
	      cout<<"NO\n";
	    else
	    {
	        bool res = checkSubsetSum(arr,n,sum/2);
	        if(res)
	          cout<<"YES\n";
	        else
	          cout<<"NO\n";
	    }
	}
	return 0;
}
