class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt=1;
        vector<int>ans;
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            int freq=it.second;
            if(freq>n/3)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};