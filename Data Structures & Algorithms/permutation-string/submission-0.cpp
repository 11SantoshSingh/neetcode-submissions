class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        unordered_map<char,int> cnt1;
        int n = s2.size();
        for(char c : s1)
            cnt1[c]++;
        
        int need = cnt1.size();

        for(int i=0;i<n;i++){
            unordered_map<char,int> cnt2;
            int cur = 0;

            for(int j=i;j<n;j++){
                char c = s2[j];
                cnt2[s2[j]]++;

                if(cnt1[c] < cnt2[c]){
                    break;
                } 
                if(cnt1[c] == cnt2[c]){
                    cur++;
                }

                if(cur == need)
                    return true;
            }
        }

        return false;
    }
};
