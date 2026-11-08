class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0 , r = s.length() - 1;

        s = lowerCase(s);

        while(l <= r){
            if(!isAlphanumeric(s[l])) l++;
            if(!isAlphanumeric(s[r])) r--;

            if(isAlphanumeric(s[l]) && isAlphanumeric(s[r])){
                if(s[l] == s[r]){
                    l++ , r--;
                }
                else{
                    return false;
                }
            }
        }

        return true;
    }

    bool isAlphanumeric(char c){
        if(c >= 'a' && c <= 'z') return true;
        if(c >= 'A' && c <= 'Z') return true;
        if(c >= '0' && c <= '9') return true;

        return false;
        
    }

    string lowerCase(string s){
        for(char&c : s){
            c = tolower(c);
        }
        return s;
    }
};
