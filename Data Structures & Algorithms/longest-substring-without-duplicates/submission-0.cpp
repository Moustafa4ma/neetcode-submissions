class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0 , r = 0 ;
        int max_size = 0;
        unordered_map<char , int> freq;

        while(r < s.length()){
            freq[s[r]]++;
            while(freq[s[r]] > 1){
                freq[s[l]]--;
                l++;
            }
            max_size = max(max_size , r - l + 1);
            r++;
        }

        return max_size;
    }
};
