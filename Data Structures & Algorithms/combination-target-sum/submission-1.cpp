class Solution {
    void findsum(int ind,int      target,vector<int>&ds,set<vector<int>>&ans,vector<int>& nums)
    {
        if(target==0)
        {
            ans.insert(ds);
            return;
        }
        if(ind>=nums.size())return;
        if(nums[ind]<=target)
        {
            ds.push_back(nums[ind]);
            findsum(ind,target-nums[ind],ds,ans,nums);
            ds.pop_back();
           
        }
         findsum(ind+1,target,ds,ans,nums);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        set<vector<int>>ans;
        vector<int>ds;
        findsum(0,target,ds,ans,nums);
        return vector<vector<int>>(ans.begin(),ans.end());

    }
};
