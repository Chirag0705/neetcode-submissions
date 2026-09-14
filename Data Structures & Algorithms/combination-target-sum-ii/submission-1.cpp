class Solution {
    void findcombi(int ind,int target,vector<vector<int>>&ans,vector<int>&ds,vector<int>& candidates)
    {
       
            if(target==0)
            {
                ans.push_back(ds);
                return;
            }
          
        
        
        for(int i=ind;i<candidates.size();i++)
        
        {
            if(i>ind&&candidates[i-1]==candidates[i])continue;
            if(candidates[i]>target)break;
            ds.push_back(candidates[i]);
            findcombi(i+1,target-candidates[i],ans,ds,candidates);
            ds.pop_back();
        }
        
        
        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findcombi(0,target,ans,ds,candidates);
        return ans;
    }
};
