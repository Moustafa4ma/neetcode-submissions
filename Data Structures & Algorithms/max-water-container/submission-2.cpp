class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int l = 0 , r = heights.size() - 1;
        int max_cap = 0;

        while(l < r){
            int height = min(heights[l] , heights[r]);
            int width = r - l;
            max_cap = max(max_cap , width * height);
            if(heights[l] <= heights[r]) l++;
            else r--;
        }
        return max_cap;
    }
};