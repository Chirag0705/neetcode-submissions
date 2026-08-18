class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int area;
        int maxi=INT_MIN;
        int width=0,height=0;
        while(left<right)
        {
            width=right-left;
            height=min(heights[left],heights[right]);
            area=width*height;
            maxi=max(area,maxi);

            if(heights[left]<heights[right])
            {
                left++;
            }
            else
            {
                right--;
            }

        }
        return maxi;
    }
};
