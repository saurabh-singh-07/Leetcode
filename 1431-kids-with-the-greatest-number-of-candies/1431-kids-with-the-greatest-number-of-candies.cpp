class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;

        int largest = 0;
        for(int i : candies)
            largest = max(largest , i);
        
        for(int candie : candies){

            int totalCandies = extraCandies + candie;
            (totalCandies < largest) ? ans.push_back(false) : ans.push_back(true);
        }
        return ans;
    }
};