class Solution {
public:
    int mySqrt(int n) {
        if(n == 1 || n == 0) return n;

        int st = 0, en = n, ans = 0;

        while(st < en){
            int mid = st + (en - st)/2;

            if(mid * mid == n) return mid;
            else if(mid * mid < n){
                ans = mid;
                st = mid + 1;
            }else en = mid;
        }
        return ans;
    }
};