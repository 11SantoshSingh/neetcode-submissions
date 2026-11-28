class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int l = 0, r  = row*col - 1;

        while(l <= r){
            int m = l + (r-l)/2;
            int rw = m/col, cl = m%col;

            if(target > matrix[rw][cl]){
                l = m + 1;
            }else if(target < matrix[rw][cl]){
                r = m - 1;
            }else{
                return true;
            }
        }

        return false;
    }
};
