class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, lmax = 0, right = height.size() - 1, rmax = 0, water = 0;
        while( left <= right){
            if(height[left] >= height[right]){
                if(rmax <= height[right]) rmax = height[right];
                else water += rmax - height[right];
                right--;
            }else{
                if(lmax <= height[left]) lmax = height[left];
                else water += lmax - height[left];
                left ++;
            }
        }
        return water;
    }
};