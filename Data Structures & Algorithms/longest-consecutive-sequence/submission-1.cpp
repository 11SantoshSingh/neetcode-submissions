class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());

        int n  = nums.size();

        int res = 0;
        int cur = nums[0], streak = 0;
        int i = 0;

        while(i < n){
            if(cur != nums[i]){
                cur = nums[i];
                streak = 0;
            }

            while( i < nums.size() && nums[i] == cur){
                i++;
            }

            streak++;
            cur++;
            res = max(res,streak);
        
        }
            

        return res;
    }
};
