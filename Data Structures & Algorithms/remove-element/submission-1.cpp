class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int>ans;
        int j=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=val)
            {
                cnt++;
                ans.push_back(nums[i]);
            }
        }
        for(int k=0;k<ans.size();k++)
        {
            nums[k]=ans[k];
        }
        return cnt;
    }
};