class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int result= 0;

        for(int i : gain){
            sum += i;

            result = max(result, sum);
        }
        return result;
    }
};