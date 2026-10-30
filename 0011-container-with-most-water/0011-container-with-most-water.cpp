class Solution {
public:
    int maxArea(vector<int>& h) {
        int i = 0, j = h.size() - 1, totalWater = 0;
        while(i < j){
            int w = j - i;
            if(h[i] < h[j]){
                int water = w * h[i];
                totalWater = max(totalWater , water);
                i++;
            }else {
                int water = w * h[j];
                totalWater = max(totalWater , water);
                j--;
            }
        }
        return totalWater ;
    }
};