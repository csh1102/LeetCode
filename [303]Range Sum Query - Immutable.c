//Given an integer array nums, handle multiple queries of the following type: 
//
// 
// Calculate the sum of the elements of nums between indices left and right 
//inclusive where left <= right. 
// 
//
// Implement the NumArray class: 
//
// 
// NumArray(int[] nums) Initializes the object with the integer array nums. 
// int sumRange(int left, int right) Returns the sum of the elements of nums 
//between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + 
//nums[right]). 
// 
//
// 
// Example 1: 
//
// 
//Input
//["NumArray", "sumRange", "sumRange", "sumRange"]
//[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
//Output
//[null, 1, -1, -3]
//
//Explanation
//NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
//numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
//numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
//numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
// 
//
// 
// Constraints: 
//
// 
// 1 <= nums.length <= 10⁴ 
// -10⁵ <= nums[i] <= 10⁵ 
// 0 <= left <= right < nums.length 
// At most 10⁴ calls will be made to sumRange. 
// 
//
// Related Topics Array Design Prefix Sum 👍 3055 👎 1873


//leetcode submit region begin(Prohibit modification and deletion)



typedef struct {
    
} NumArray;


NumArray* numArrayCreate(int* nums, int numsSize) {
    
}

int numArraySumRange(NumArray* obj, int left, int right) {
    
}

void numArrayFree(NumArray* obj) {
    
}

/**
 * Your NumArray struct will be instantiated and called as such:
 * NumArray* obj = numArrayCreate(nums, numsSize);
 * int param_1 = numArraySumRange(obj, left, right);
 
 * numArrayFree(obj);
*/
//leetcode submit region end(Prohibit modification and deletion)
