//Given a non-empty array of integers nums, every element appears twice except 
//for one. Find that single one. 
//
// You must implement a solution with a linear runtime complexity and use only 
//constant extra space. 
//
// 
// Example 1: 
// Input: nums = [2,2,1]
//Output: 1
// 
// Example 2: 
// Input: nums = [4,1,2,1,2]
//Output: 4
// 
// Example 3: 
// Input: nums = [1]
//Output: 1
// 
// 
// Constraints: 
//
// 
// 1 <= nums.length <= 3 * 10⁴ 
// -3 * 10⁴ <= nums[i] <= 3 * 10⁴ 
// Each element in the array appears twice except for one element which appears 
//only once. 
// 
//
// Related Topics Array Bit Manipulation 👍 15707 👎 651


//leetcode submit region begin(Prohibit modification and deletion)
int singleNumber(int* nums, int numsSize) {
    int res = 0;
    for(int i = 0; i < numsSize; i++){
        res ^= nums[i];
    }
    return res;
}
//leetcode submit region end(Prohibit modification and deletion)
