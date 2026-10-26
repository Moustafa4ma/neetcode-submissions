class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        unordered_map<int , int> freq1;
        unordered_map<int , int> freq2;

        for(int i = 0; i < s.length() ; i++){
            freq1[s[i]]++;
            freq2[t[i]]++;
        }

        for(int i = 0 ; i < s.length() ; i++){
            if(freq1[s[i]] != freq2[s[i]]){
                return false;
            }
        }
        return true;
    }
};
