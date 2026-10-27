class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array<int , 26> , vector<string>> m;
        vector<vector<string>> groups;
        for(string s : strs){
            array<int , 26> freq = {0};
            for(char c : s){
                freq[c - 'a']++;
            }
            m[freq].push_back(s);
        }
        auto it = m.begin();
        while(it != m.end()){
            groups.push_back(it->second);
            it++;
        }
        return groups;
    }
    
};
