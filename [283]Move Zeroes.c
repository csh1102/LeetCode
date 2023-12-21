//Given an integer array nums, move all 0's to the end of it while maintaining 
//the relative order of the non-zero elements. 
//
// Note that you must do this in-place without making a copy of the array. 
//
// 
// Example 1: 
// Input: nums = [0,1,0,3,12]
//Output: [1,3,12,0,0]
// 
// Example 2: 
// Input: nums = [0]
//Output: [0]
// 
// 
// Constraints: 
//
// 
// 1 <= nums.length <= 10⁴ 
// -2³¹ <= nums[i] <= 2³¹ - 1 
// 
//
// 
//Follow up: Could you minimize the total number of operations done?
//
// Related Topics Array Two Pointers 👍 15794 👎 406


//leetcode submit region begin(Prohibit modification and deletion)
void moveZeroes(int* nums, int numsSize) {
    if (numsSize <= 1) {
        return;
    }
    int count = 0;
    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if(nums[i] == 0) {
            count++;
        } else{
            nums[j++] = nums[i];
        }
    }
    if (count == numsSize) {
        return;
    }
    if (count == 0) {
        return;
    }
    for (int i = 0; i < count; i++) {
        nums[numsSize - 1 - i] = 0;
    }
}
//leetcode submit region end(Prohibit modification and deletion)
