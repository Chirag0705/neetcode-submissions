class Solution {
    int findcost(int ind,vector<int>& cost,vector<int>&dp)
    {

        if(ind==1)return cost[ind];
        if(ind==0)return cost[ind];
        if(dp[ind]!=-1)return dp[ind];
        int left=cost[ind]+findcost(ind-1,cost,dp);
        int right=cost[ind]+findcost(ind-2,cost,dp);
        return dp[ind]=min(left,right);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        return min(findcost(cost.size()-1,cost,dp),findcost(cost.size()-2,cost,dp));
    }
};
