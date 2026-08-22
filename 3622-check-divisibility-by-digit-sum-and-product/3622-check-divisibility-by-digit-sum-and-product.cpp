class Solution {
public:
    bool checkDivisibility(int num) {
        int n = num;
        int  sum = 0;
        int product = 1;

        while(n > 0){
            int digit = n % 10;
            n /= 10;
            sum += digit;
            product *= digit;
        }
        
        int total = sum + product;
        return num %(total) == 0;

    }
};