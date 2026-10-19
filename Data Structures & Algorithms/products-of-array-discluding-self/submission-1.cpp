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
            }else{
                mul*=num;
            }
           
        }

       

        if(zerocnt > 1){
            return ans;
        }

        
        for(int i=0;i<n;i++){
            if(zerocnt > 0){
                ans[i] = (nums[i] == 0) ? mul : 0;
            }else{
                ans[i] = mul/nums[i];
            }
        }

        

        return ans;
    }
};
