class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int rows = m.size();
        int cols = m[0].size();
        int left = 0, right = rows * cols - 1;

        while(left <= right){
            int mid = left + ( right - left) / 2;

            int row = mid / cols;
            int col = mid % cols;

            if(m[row][col] == target) return true;
            else if(m[row][col] > target) right = mid - 1;
            else left = mid + 1;
        }
        return false;
    }
};