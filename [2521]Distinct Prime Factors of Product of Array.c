//Given an array of positive integers nums, return the number of distinct prime 
//factors in the product of the elements of nums. 
//
// Note that: 
//
// 
// A number greater than 1 is called prime if it is divisible by only 1 and 
//itself. 
// An integer val1 is a factor of another integer val2 if val2 / val1 is an 
//integer. 
// 
//
// 
// Example 1: 
//
// 
//Input: nums = [2,4,3,7,10,6]
//Output: 4
//Explanation:
//The product of all the elements in nums is: 2 * 4 * 3 * 7 * 10 * 6 = 10080 = 2
//⁵ * 3² * 5 * 7.
//There are 4 distinct prime factors so we return 4.
// 
//
// Example 2: 
//
// 
//Input: nums = [2,4,8,16]
//Output: 1
//Explanation:
//The product of all the elements in nums is: 2 * 4 * 8 * 16 = 1024 = 2¹⁰.
//There is 1 distinct prime factor so we return 1.
// 
//
// 
// Constraints: 
//
// 
// 1 <= nums.length <= 10⁴ 
// 2 <= nums[i] <= 1000 
// 
//
// Related Topics Array Hash Table Math Number Theory 👍 421 👎 9


//leetcode submit region begin(Prohibit modification and deletion)
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int *getPrimeArr(int n, int* returnSize) {
    int *arr = (int *)malloc(sizeof(int) * n);
    int count = 0;
    for(int i = 2; i <= n; i++) {
        if(n % i == 0 && isPrime(i) == 1) {
            arr[count] = i;
            count++;
            while(n % i == 0) {
                n = n / i;
            }
        }
    }
    *returnSize = count;
    return arr;
}
int isContains(int* arr, int arrSize, int n) {
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] == n) {
            return 1;
        }
    }
    return 0;
}
int distinctPrimeFactors(int* nums, int numsSize) {
    int count = 0;
    int arr[10000];
    for(int i = 0; i < numsSize; i++) {
        int n = nums[i];
        int tempSize = 0;
        int *primeArr = getPrimeArr(n, &tempSize);
        for(int j = 0; j < tempSize; j++) {
            if(isContains(arr, count, primeArr[j]) == 0) {
                arr[count] = primeArr[j];
                count++;
            }
        }
    }
    return count;
}
//leetcode submit region end(Prohibit modification and deletion)
