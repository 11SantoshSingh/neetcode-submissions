class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map<char,int> mpp;
        int i = 0;
        int len = 1;

        int res = 0;
        int maxf = 0;
        for(int j=0;j<s.size();j++){
            mpp[s[j]]++;
            maxf = max(maxf,mpp[s[j]]);

            while((j-i+1) - maxf > k){
                mpp[s[i]]--;
                i++;
            }

            res = max(res,j-i+1);
        }   



        return res;
    }
};
