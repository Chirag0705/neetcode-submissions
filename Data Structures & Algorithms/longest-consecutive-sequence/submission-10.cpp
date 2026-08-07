class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int>st(nums.begin(),nums.end());
        int x=0,longi=0;
        for(auto it:st)
        {
            if(st.find(it-1)==st.end())
            {
                int cnt=1;
                x=it;
                while(st.find(x+1)!=st.end())
                {
                    x=x+1;
                    cnt++;
                }
                longi=max(longi,cnt);
            }
        }
        return longi;
    }
};