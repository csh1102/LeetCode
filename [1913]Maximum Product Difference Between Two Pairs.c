//The product difference between two pairs (a, b) and (c, d) is defined as (a * 
//b) - (c * d). 
//
// 
// For example, the product difference between (5, 6) and (2, 7) is (5 * 6) - (2
// * 7) = 16. 
// 
//
// Given an integer array nums, choose four distinct indices w, x, y, and z 
//such that the product difference between pairs (nums[w], nums[x]) and (nums[y], 
//nums[z]) is maximized. 
//
// Return the maximum such product difference. 
//
// 
// Example 1: 
//
// 
//Input: nums = [5,6,2,7,4]
//Output: 34
//Explanation: We can choose indices 1 and 3 for the first pair (6, 7) and 
//indices 2 and 4 for the second pair (2, 4).
//The product difference is (6 * 7) - (2 * 4) = 34.
// 
//
// Example 2: 
//
// 
//Input: nums = [4,2,5,9,7,4,8]
//Output: 64
//Explanation: We can choose indices 3 and 6 for the first pair (9, 8) and 
//indices 1 and 5 for the second pair (2, 4).
//The product difference is (9 * 8) - (2 * 4) = 64.
// 
//
// 
// Constraints: 
//
// 
// 4 <= nums.length <= 10⁴ 
// 1 <= nums[i] <= 10⁴ 
// 
//
// Related Topics Array Sorting 👍 866 👎 47


//leetcode submit region begin(Prohibit modification and deletion)
int maxProductDifference(int* nums, int numsSize){
    int max1 = 0;
    int max2 = 0;
    int min1 = 10000;
    int min2 = 10000;
    for (int i = 0; i < numsSize; i++) {
        int tmp = nums[i];
        if (tmp > max1  || (tmp == max1)) {
            max2 = max1;
            max1 = tmp;
        } else if (tmp > max2) {
            max2 = tmp;
        }
        if (tmp < min1 || (tmp == min1)) {
            min2 = min1;
            min1 = tmp;
        }
        else if (tmp < min2) {
            min2 = tmp;
        }
    }
    return max1 * max2 - min1 * min2;
}
//leetcode submit region end(Prohibit modification and deletion)
