class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                if(sum>=target)
                {
                    mini=min(j-i+1,mini);
                    break;
                }
            }
        }
        return mini==INT_MAX?0:mini;
    }
};