class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int startRow = 0 , endRow = matrix.size() - 1;
        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow) / 2;

            if(matrix[midRow][0] <= target && matrix[midRow][matrix[0].size() - 1] >= target){
                int l = 0 , r = matrix[0].size() - 1;
                while(l <= r){
                    int mid = l + (r - l) / 2;
                    if(matrix[midRow][mid] == target) return true;

                    if(matrix[midRow][mid] < target){
                        l = mid + 1;
                    }
                    else{
                        r = mid - 1;
                    }
                }
                return false;
            }
            else if(matrix[midRow][0] > target){
                endRow = midRow - 1;
            }
            else{
                startRow = midRow + 1;
            }
        }
        return false;

    }
};


