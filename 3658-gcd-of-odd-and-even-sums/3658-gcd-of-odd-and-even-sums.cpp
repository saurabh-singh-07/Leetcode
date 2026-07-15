class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddSum = 0;
        int evenSum = 0;

        for(int i = 0;i < (2 * n); i = i + 2){
            evenSum += i;
        }
        for(int i = 1; i < (2 * n); i = i + 2){
            oddSum += i;
        }

        return abs(oddSum - evenSum);
    }
};