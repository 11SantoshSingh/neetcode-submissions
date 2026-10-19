class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> st(nums.begin(),nums.end());

        int res = 0;
        int len = 0;

        for(auto nm: st){
            if(st.find(nm - 1) == st.end()){
                len = 1;
                while(st.find(nm+len) != st.end()){
                    len++;
                }
                res = max(res,len);
            }
        }

        return res;
    }
};
