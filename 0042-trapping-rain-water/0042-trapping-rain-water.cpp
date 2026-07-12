class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int l = 0, r = height.size() - 1;
        int lmax = 0, rmax = 0;

        while(l <= r){
            if(height[l] >= height[r]){
                if(rmax <= height[r]){
                    rmax = height[r];
                }else{
                    water += rmax - height[r];
                }
                r--;
            }else{
                if(lmax <= height[l]){
                    lmax = height[l];
                }else{
                    water += lmax - height[l];
                }
                l++;
            }
            
        }
        return water;
    }
};