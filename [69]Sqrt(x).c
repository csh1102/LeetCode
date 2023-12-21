//Given a non-negative integer x, return the square root of x rounded down to 
//the nearest integer. The returned integer should be non-negative as well. 
//
// You must not use any built-in exponent function or operator. 
//
// 
// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python. 
// 
//
// 
// Example 1: 
//
// 
//Input: x = 4
//Output: 2
//Explanation: The square root of 4 is 2, so we return 2.
// 
//
// Example 2: 
//
// 
//Input: x = 8
//Output: 2
//Explanation: The square root of 8 is 2.82842..., and since we round it down 
//to the nearest integer, 2 is returned.
// 
//
// 
// Constraints: 
//
// 
// 0 <= x <= 2³¹ - 1 
// 
//
// Related Topics Math Binary Search 👍 7678 👎 4393


//leetcode submit region begin(Prohibit modification and deletion)
int mySqrt(int x) {
    int dif = 1;
    if (x == 0 || x == 1) {
        return x;
    }
    if(x == 2)
        return 1;
    int i = x / 2;
    int j = x / i;
    while(i != j+ dif && i != j-dif && i != j){
        j = x / i;
        i = (i + j) / 2;
    }
    return j;
}
//int mySqrt(int x) {
//    if (x == 0 || x == 1) {
//        return x;
//    }
//    int left = 1, right = x;
//    int result = 0;
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//        int i = x / mid;
//        if (mid == i) {
//            return mid;
//        }
//        if (mid < i) {
//            left = mid + 1;
//            result = mid;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//    return result;
//}
//leetcode submit region end(Prohibit modification and deletion)
