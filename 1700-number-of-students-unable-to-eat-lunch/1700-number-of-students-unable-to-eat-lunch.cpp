class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> counts(2, 0);
        for(int s :students){
            counts[s]++;
        }
        int remaining = sandwiches.size();
        for(int s : sandwiches){
            if(counts[s] == 0) break;
            if(remaining == 0) break;
            counts[s]--;
            remaining --;
        }
        return remaining;
    }
};