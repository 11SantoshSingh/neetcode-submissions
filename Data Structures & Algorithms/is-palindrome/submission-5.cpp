class Solution {
public:
    bool isalphanum(char s){
         if (s >= '0' && s <= '9' || s >= 'a' && s <= 'z' ||
                s >= 'A' && s <='Z')
                    return true;
        else return false;
    }
    
    bool isPalindrome(string s) {
        if(s.size() == 0 || s.size() == 1) return true;

        int i = 0, j = s.size() - 1;

        while( i <= j){
            while( i < j && !isalphanum(s[i])){
                i++;
            }
            while( i < j && !isalphanum(s[j])){
                j--;
            }

            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++,j--;
        }

        return true;
    }
};
