class Solution {
public:
    
    int characterReplacement(string s, int k) {
        int l = 0 , r = 0 , max_length = 0;
        int freq[26] = {0};
        int maxf = 0;

        while(r < s.length()){
            freq[s[r] - 'A']++;
            maxf = max(maxf , freq[s[r] - 'A']);
            while((r - l + 1) - maxf > k){
                freq[s[l] - 'A']--;
                l++;
            }
            max_length = max(max_length , (r - l + 1));
            r++;
        }
        return max_length;


    }
};
