class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i = 0 ; i < matrix.size() ; i++){
            int l = 0 , r = matrix[0].size() - 1;

            while(l <= r){
                int mid = l + (r - l)/2;

                if(matrix[i][mid] == target) return true;

                if(matrix[i][mid] < target){
                    l = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
        }
        return false;

    }
};


