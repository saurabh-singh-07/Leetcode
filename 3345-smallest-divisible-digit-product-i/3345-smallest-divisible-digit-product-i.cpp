class Solution {
public:
    int check (int n){
        int product = 1;
        while(n){
            int digit = n % 10;
            product *= digit;
            n /= 10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        while(check(n) % t != 0){
            n += 1;
        }
        return n;
    }
};