class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();

        int i = 0, j = n-1;
        int res = nums[i];

        while(i <= j){
            if(nums[i] <= nums[j]){
                res = min(res, nums[i]);
                break;
            }
            int m = i + (j-i)/2;
            res = min(res,nums[m]);
            if(nums[m] >= nums[j]){
                i = m + 1;
            }else{
                j = m-1;
            }
        }
        return res;
    }
};
