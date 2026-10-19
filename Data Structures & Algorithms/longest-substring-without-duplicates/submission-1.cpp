class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> hashset;
        int i = 0;
        int len = 0;
        
        for(int j=0;j<s.size();j++){
            while(hashset.find(s[j]) != hashset.end()){
                hashset.erase(s[i]);
                i++;
            }

            hashset.insert(s[j]);
            len = max(len,j-i+1);
        }

        return len;
    }
};
