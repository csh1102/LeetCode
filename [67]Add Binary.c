//Given two binary strings a and b, return their sum as a binary string. 
//
// 
// Example 1: 
// Input: a = "11", b = "1"
//Output: "100"
// 
// Example 2: 
// Input: a = "1010", b = "1011"
//Output: "10101"
// 
// 
// Constraints: 
//
// 
// 1 <= a.length, b.length <= 10⁴ 
// a and b consist only of '0' or '1' characters. 
// Each string does not contain leading zeros except for the zero itself. 
// 
//
// Related Topics Math String Bit Manipulation Simulation 👍 9014 👎 906


//leetcode submit region begin(Prohibit modification and deletion)
char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1, j = strlen(b) - 1;
    int carry = 0;
    char *res = (char *)malloc(sizeof(char) * (strlen(a) > strlen(b) ? strlen(a) + 1 : strlen(b) + 1));
    memset(res, 0, sizeof(char) * (strlen(a) > strlen(b) ? strlen(a) + 1 : strlen(b) + 1));
    while (i >= 0 || j >= 0 || carry) {
        if (i >= 0) carry += a[i--] - '0';
        if (j >= 0) carry += b[j--] - '0';
        res[--i] = (char)(carry % 2 + '0');
        carry /= 2;
    }
    return res;
}
//leetcode submit region end(Prohibit modification and deletion)
