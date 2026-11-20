class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> max_before(height.size() , 0);
        vector<int> max_after(height.size() , 0);
        int total_water = 0;

        for(int i = 1 ; i < height.size() - 1 ; i++){
            max_before[i] = max(max_before[i - 1] , height[i - 1]);
        }

        for(int i = height.size() - 2 ; i >= 1 ; i--){
            max_after[i] = max(max_after[i + 1] , height[i + 1]);
        }

        for(int i = 1 ; i < height.size() - 1 ; i++){
            total_water += max(0 , min(max_before[i] , max_after[i]) - height[i]);
        }
        return total_water;
    }
};
