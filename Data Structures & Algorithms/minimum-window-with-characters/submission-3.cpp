class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";
        unordered_map<char,int> Tmpp, Smpp;

        for(char c:t)
            Tmpp[c]++;

        int l = 0;
        int need = Tmpp.size();
        int have = 0;
        int resLen = INT_MAX;
        pair<int,int> res{-1,-1};
 
        for(int r = 0; r<s.size(); r++){
            char c = s[r];
            Smpp[c]++;

            if(Tmpp.count(c) && Tmpp[c] == Smpp[c]){
                have++;
            }

            while(have == need){
                if(r - l + 1 < resLen ){
                    resLen = r - l + 1;
                    res = {l,r};
                }

                Smpp[s[l]]--;

                if(Tmpp.count(s[l]) && Smpp[s[l]] < Tmpp[s[l]]){
                    have--;
                }
                l++;
            }
        }

        return resLen == INT_MAX ? "" : s.substr(res.first,resLen);

    }
};
