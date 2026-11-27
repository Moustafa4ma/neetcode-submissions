class Solution {
public:
    int findMin(vector<int> &nums) {
        if(nums.size() == 1) return nums[0];
        int l = 0 , r = nums.size() - 1 , ans = 1000;
        while(l<=r){
            int mid = l + (r - l) / 2;
            ans = min(ans , nums[mid]);

            if(nums[l] <= nums[mid] && nums[mid] <= nums[r]){
                ans = min(ans , nums[l]);
                return ans;
            }
            else if(nums[l] <= nums[mid]){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return ans;
    }
};
