class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i = 0;
        int n = arr.size();
        while(i < arr.size()){
            if(arr[i] == 0){
                arr.insert(arr.begin() + i, 0);
                i += 2;
            }else{
                i ++;
            }
        }
        arr.resize(n);
        return;
    }
};