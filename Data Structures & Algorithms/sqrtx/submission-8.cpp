class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)return x;
        int n=x/2;
        int ans;
        int low=1,high=n;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            long long squre=1LL*mid*mid;
            if(squre<=x)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
    }
};