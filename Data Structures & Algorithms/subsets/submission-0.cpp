class Solution {
    void findsub(int ind, vector<vector<int>>&ans,vector<int>& nums,vector<int>&ds)
    {
        
            ans.push_back(ds);
          
        
        for(int i=ind;i<nums.size();i++)
        {
            ds.push_back(nums[i]);
            findsub(i+1,ans,nums,ds);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        findsub(0,ans,nums,ds);
        return ans;
    }
};
