class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0 , r = s.length() - 1;


        while(l < r){
            while(l < r && !isAlphanumeric(s[l])){
                l++;
            }
                
            while(l < r && !isAlphanumeric(s[r])){
                r--;
            }

            
            if(tolower(s[l]) == tolower(s[r])){
                l++ , r--;
            }
            else return false;
                
        }

        return true;
    }

    bool isAlphanumeric(const char& c){
        if(c >= 'a' && c <= 'z') return true;
        if(c >= 'A' && c <= 'Z') return true;
        if(c >= '0' && c <= '9') return true;

        return false;
        
    }

    
};
