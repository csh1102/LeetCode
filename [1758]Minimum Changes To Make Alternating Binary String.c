//You are given a string s consisting only of the characters '0' and '1'. In 
//one operation, you can change any '0' to '1' or vice versa. 
//
// The string is called alternating if no two adjacent characters are equal. 
//For example, the string "010" is alternating, while the string "0100" is not. 
//
// Return the minimum number of operations needed to make s alternating. 
//
// 
// Example 1: 
//
// 
//Input: s = "0100"
//Output: 1
//Explanation: If you change the last character to '1', s will be "0101", which 
//is alternating.
// 
//
// Example 2: 
//
// 
//Input: s = "10"
//Output: 0
//Explanation: s is already alternating.
// 
//
// Example 3: 
//
// 
//Input: s = "1111"
//Output: 2
//Explanation: You need two operations to reach "0101" or "1010".
// 
//
// 
// Constraints: 
//
// 
// 1 <= s.length <= 10⁴ 
// s[i] is either '0' or '1'. 
// 
//
// Related Topics String 👍 591 👎 21


//leetcode submit region begin(Prohibit modification and deletion)
int func(char* s,int len) {
    int flag;
    int res;
    if(len == 1) {
        return 0;
    }
    res = 0;
    flag = 0;
    char prev = s[0];
    for(int i = 1; i < len; i++) {
        if (flag) {
            if (s[i] == prev) {
                flag = 0;
            } else {
                res++;
            }
        } else {
            if (s[i] == prev) {
                flag = 1;
                res++;
            }
        }
        prev = s[i];
    }
    return res;
}
int minOperations(char* s) {
    int len = strlen(s);
    if(len == 1) {
        return 0;
    }
    int res = func(s,len);
    return res < len - res ? res : len - res;
}
//leetcode submit region end(Prohibit modification and deletion)
