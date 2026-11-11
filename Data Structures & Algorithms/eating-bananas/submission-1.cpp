class Solution {
    bool findhours(int mid,vector<int>& piles,int h)
    {
        long long hr=0;
        for(int i=0;i<piles.size();i++)
        {
            hr+=ceil(double(piles[i])/mid);
        }
        return hr<=h;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(low<=high)
        {
            int mid=low + (high - low) / 2;
            
            if(findhours(mid,piles,h))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
