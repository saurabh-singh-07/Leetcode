class Solution {
public:
    int findMin(vector<int>& arr) {
        int st = 0, en = arr.size() - 1;

        while(st < en){
            int mid = st  + (en - st) / 2;
           if(arr[mid] <= arr[en]) en = mid;
           else st = mid + 1;
        }
        return arr[st];
    }
};