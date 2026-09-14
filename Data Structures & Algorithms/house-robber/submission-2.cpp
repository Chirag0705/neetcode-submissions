class Solution {
    int dfs(int ind,vector<int>& nums, vector<int>&dp)
    {
        if(ind<0)
        {
            return 0;
        }
        if(dp[ind]!=-1)return dp[ind];
        int left=0+dfs(ind-1,nums,dp);
        int right=nums[ind]+dfs(ind-2,nums,dp);
        return dp[ind]=max(left,right);
    }
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1,-1);
        return dfs(nums.size()-1,nums,dp);
    }
};
