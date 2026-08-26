class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int maxi=0;
        int n=prices.size();
        for(int i=1;i<n;i++)
        {
            int profit=prices[i]-buy;
            maxi=max(profit,maxi);
            buy=min(buy,prices[i]);
        }
        return maxi;
    }
};
