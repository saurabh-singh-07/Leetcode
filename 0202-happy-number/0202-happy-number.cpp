class Solution {
public:
    int check(int n){
        int digit = 0;
        while(n > 0){

            int rem = n % 10;
            digit += rem * rem;
            n = n / 10;

        }
        return digit;
    }
    bool isHappy(int n) {
        unordered_set<int> visit;
        while(visit.find(n) == visit.end()){
            visit.insert(n);
            n = check(n);
            if(n == 1){
                return true;
            }
        }
        return false;
    }
};