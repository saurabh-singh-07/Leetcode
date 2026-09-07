/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function(nums) {
    let st = 0, en = nums.length -1;

    while(st < en){
        let mid = Math.floor(st + ( en - st) / 2);

        if(nums[mid] <= nums[en]) en = mid;
        else st = mid + 1;
    }
    return nums[st];
};