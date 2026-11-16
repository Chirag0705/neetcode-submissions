
class Solution {
    bool ispossible(int mid, vector<int>& weights, int limit)
    {
        int days = 1;
        int sum = 0;

        for(int i = 0; i < weights.size(); i++)
        {
            if(weights[i] > mid)
                return false;

            if(sum + weights[i] <= mid)
            {
                sum += weights[i];
            }
            else
            {
                days++;
                sum = weights[i];
            }
        }

        return days <= limit;
    }

public:
    int shipWithinDays(vector<int>& weights, int days)
    {
        int low = 1;
        int sum = 0;

        for(int i = 0; i < weights.size(); i++)
        {
            sum += weights[i];
        }

        int high = sum;
        int ans = high;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(ispossible(mid, weights, days))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};
