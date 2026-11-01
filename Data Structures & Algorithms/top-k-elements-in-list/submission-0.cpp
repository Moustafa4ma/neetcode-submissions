class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int , int> freq;

        for(int num : nums){
            freq[num]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        auto it = freq.begin();

        while(it != freq.end()){
            buckets[it->second].push_back(it->first);
            it++;
        }

        for(int i = nums.size() ; i >= 0 ; i--){
            if(buckets[i].size() != 0){
                for(int num : buckets[i]){
                    res.push_back(num);
                }
            }
            if(res.size() == k) break;
        }

        return res;
    }
};
