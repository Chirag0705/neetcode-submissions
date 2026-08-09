class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
       
        int both=n+m;
        int j=0;
        for(int i=n;i<both;i++)
        {
            
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};