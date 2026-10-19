class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, j = height.size() - 1;

        int leftm = height[i];
        int rightm = height[j];
        int res = 0;

        while(i < j){
            if(height[i] < height[j]){
                i++;
                leftm = max(leftm,height[i]);
                res += leftm - height[i];
            }else{
                j--;
                rightm = max(rightm,height[j]);
                res +=rightm - height[j];
            }
        }

        return res;
    }
};
