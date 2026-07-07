class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long place = 1;
        long long x = 0;
        if(n < 0) return 0;

        while(n > 0){
            int num = n % 10;
            
            if(num > 0){
                x =num * place + x;
                place *= 10;
                sum += num;
            }
            n = n / 10;
        }
        return x * sum;
    }
};