class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> hash_map;

        for(int i = 0 ; i < nums.size() ; i++){
            int rem = target - nums[i];
            if(hash_map.count(nums[i])){
                return {hash_map[nums[i]] , i};
            }
            if(!hash_map.count(rem)){
                hash_map[rem] = i;
            }
        }
    }
};
