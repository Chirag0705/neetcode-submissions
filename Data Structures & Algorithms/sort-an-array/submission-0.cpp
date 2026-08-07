class Solution {
    void mergsort(int left,int mid,int right,vector<int>&ans,vector<int>& nums)
    {
        int i=left;
        int j=mid+1;
        int k=0;
        while(i<=mid&&j<=right)
        {
            if(nums[i]<=nums[j])
            {
                ans[k++]=nums[i++];
            }
            else
            {
                ans[k++]=nums[j++];
            }
        }
        while(i<=mid)
        {
            ans[k++]=nums[i++];
        }
        while(j<=right)
        {
            ans[k++]=nums[j++];
        }
        for(int k=left;k<=right;k++)
        {
            nums[k]=ans[k-left];
        }

    }
    void merg(int left,int right,vector<int>&ans,vector<int>&nums)
    {
        if(left<right)
        {
            int mid=(left+right)/2;
            merg(left,mid,ans,nums);
            merg(mid+1,right,ans,nums);
            mergsort(left,mid,right,ans,nums);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        merg(0,n-1,ans,nums);
        return nums;

    }
};