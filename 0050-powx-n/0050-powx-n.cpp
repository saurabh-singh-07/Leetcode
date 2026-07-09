class Solution {
public:
    double myPow(double x, int n) {
        if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
        if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;

        double ans = 1;
        for(long long i = 1; i <= abs(n); i ++){
            ans *= x;
        }

        if(n < 0){
            return 1/ans;
        }
        return ans;
    }
};