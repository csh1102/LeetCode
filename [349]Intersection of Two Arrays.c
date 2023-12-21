//Given two integer arrays nums1 and nums2, return an array of their 
//intersection. Each element in the result must be unique and you may return the result in 
//any order. 
//
// 
// Example 1: 
//
// 
//Input: nums1 = [1,2,2,1], nums2 = [2,2]
//Output: [2]
// 
//
// Example 2: 
//
// 
//Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
//Output: [9,4]
//Explanation: [4,9] is also accepted.
// 
//
// 
// Constraints: 
//
// 
// 1 <= nums1.length, nums2.length <= 1000 
// 0 <= nums1[i], nums2[i] <= 1000 
// 
//
// Related Topics Array Hash Table Two Pointers Binary Search Sorting 👍 5417 👎
// 2217


//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    if(nums1Size == 0 || nums2Size == 0){
        *returnSize = 0;
        return NULL;
    }
    if(nums1Size > nums2Size){
        return intersection(nums2, nums2Size, nums1, nums1Size, returnSize);
    }
    int* res = (int*)malloc(sizeof(int) * nums1Size);
    int i = 0;
    int j = 0;
    while(i < nums1Size){
        while (j < nums2Size){
            if(nums1[i] == nums2[j]){
                res[i] = nums1[i];
                i++;
                break;
            } else {
                j++;
            }
        }
        j=0;
    }
    *returnSize = i + 1;
    return res;
}
//leetcode submit region end(Prohibit modification and deletion)
