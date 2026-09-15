class Solution {
    bool find(int r,int target,int m,vector<vector<int>>& matrix)
    {
        for(int c=0;c<m;c++)
        {
            if(matrix[r][c]==target)
            {
                return true;
            }
        }
        return false;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(find(i,target,m,matrix))
            {
                return true;
            }
        }
        return false;
    }
};
