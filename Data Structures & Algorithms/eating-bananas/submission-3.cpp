class Solution {
public:
    bool can(int k , vector<int>& piles , int h){
        long long takenTime = 0;
        for(int pile : piles){
            takenTime += (pile + k - 1) / k;
        }
        return takenTime <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1 , r = 1e9 , ans = 1;
        while(l <= r){
            int k = l + (r - l) / 2;
            if(can(k , piles , h)){
                r = k - 1;
                ans = k;
            }
            else{
                l = k + 1;
            }
        }
        return ans;
    }
};