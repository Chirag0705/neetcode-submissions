class Solution {
    int count(int ind,vector<int>&dp)
    {
        if(ind==0)
        {
            return 1;
        }
        if(ind<0)
        {
            return 0;
        }
        if(dp[ind]!=-1)return dp[ind];
        int left=count(ind-1,dp);
        int right=count(ind-2,dp);
        return dp[ind]=left+right;
    }
public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return count(n,dp);
    }
};
