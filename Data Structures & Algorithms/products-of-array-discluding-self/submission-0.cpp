class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(n,0);

        int mul = 1;
        int zerocnt = 0;

        for(int num:nums){
            if(num == 0){
                zerocnt++;    
            }
            mul *=num;
        }

        int zeromul = 1;

        if(zerocnt > 1){
            return ans;
        }else if(zerocnt == 1){
            for(int i=0;i<n;i++){
                if(nums[i] != 0){
                    zeromul *=nums[i];
                }
            }
        }


        if(zerocnt == 1){
            for(int i=0;i<n;i++){
                if(nums[i] == 0){
                    ans[i] = zeromul;
                }
            }
        }else{
            for(int i=0;i<n;i++){
                ans[i] = mul/nums[i];
            }
        }
        

        return ans;
    }
};
