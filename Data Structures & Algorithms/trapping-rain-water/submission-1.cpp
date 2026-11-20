class Solution {
public:
    int trap(vector<int>& height) {
        int max_l = height.front() , max_r = height.back();
        int l = 0 , r = height.size() - 1 , total_water = 0;

        while(l <= r){
            if(max_l <= max_r){
                total_water += max(0 , max_l - height[l]);
                max_l = max(max_l , height[l]);
                l++;
            }
            else{
                total_water += max(0 , max_r - height[r]);
                max_r = max(max_r , height[r]);
                r--;
            }
        }
        return total_water;
    }
};
