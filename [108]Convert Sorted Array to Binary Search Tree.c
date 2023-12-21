//Given an integer array nums where the elements are sorted in ascending order, 
//convert it to a height-balanced binary search tree. 
//
// 
// Example 1: 
// 
// 
//Input: nums = [-10,-3,0,5,9]
//Output: [0,-3,9,-10,null,5]
//Explanation: [0,-10,5,null,-3,null,9] is also accepted:
//
// 
//
// Example 2: 
// 
// 
//Input: nums = [1,3]
//Output: [3,1]
//Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
// 
//
// 
// Constraints: 
//
// 
// 1 <= nums.length <= 10⁴ 
// -10⁴ <= nums[i] <= 10⁴ 
// nums is sorted in a strictly increasing order. 
// 
//
// Related Topics Array Divide and Conquer Tree Binary Search Tree Binary Tree ?
//? 10534 👎 528


//leetcode submit region begin(Prohibit modification and deletion)

//  struct TreeNode {
//      int val;
//      struct TreeNode *left;
//      struct TreeNode *right;
// };
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if (numsSize == 0) {
        return NULL;
    }
    if (numsSize == 1) {
        struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        root->val = nums[0];
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    int mid = numsSize / 2;
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = nums[mid];
    root->left = sortedArrayToBST(nums, mid);
    root->right = sortedArrayToBST(nums + mid + 1, numsSize - mid - 1);
    return root;
}
//leetcode submit region end(Prohibit modification and deletion)
