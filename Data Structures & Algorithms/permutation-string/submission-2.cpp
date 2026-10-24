class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<int,int> s1cnt, s2cnt;

        int n = s1.size();
        int m = s2.size();
        
        if(n > m ) return false;

        for(int i=0;i<n;i++){
            s1cnt[s1[i] - 'a']++;
            s2cnt[s2[i] - 'a']++;
        }

        int matches = 0;
        for(int i=0;i<26;i++)
            if(s1cnt[i] == s2cnt[i])
                matches++;
        
        if(matches == 26) return true;

        int j = 0;
        for(int i=n;i<m;i++){

            if(matches == 26) return true;
            int idx = s2[i] - 'a';
            s2cnt[idx]++;

            if(s1cnt[idx] == s2cnt[idx]){
                matches++;
            }else if(s1cnt[idx] + 1 == s2cnt[idx])
                matches--;
            
            idx = s2[j]- 'a';
            s2cnt[idx]--;

            if(s1cnt[idx] == s2cnt[idx]){
                matches++;
            }else if(s1cnt[idx] - 1 == s2cnt[idx])
                matches--;
            j++;
        }

        return matches == 26;
    }
};
