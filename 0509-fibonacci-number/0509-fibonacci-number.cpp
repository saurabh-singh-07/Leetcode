class Solution {
public:
    int fib(int n) {
        if(n <=  1) return n;
        int a = 0; 
        int b = 1;
        int i = 1;
        while(i < n){
            int c = a + b;
            a = b;
            b = c;
            i ++;
        }
        return b;
    }
};