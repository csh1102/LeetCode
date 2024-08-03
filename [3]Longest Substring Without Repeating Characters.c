//Given a string s, find the length of the longest substring without repeating 
//characters. 
//
// 
// Example 1: 
//
// 
//Input: s = "abcabcbb"
//Output: 3
//Explanation: The answer is "abc", with the length of 3.
// 
//
// Example 2: 
//
// 
//Input: s = "bbbbb"
//Output: 1
//Explanation: The answer is "b", with the length of 1.
// 
//
// Example 3: 
//
// 
//Input: s = "pwwkew"
//Output: 3
//Explanation: The answer is "wke", with the length of 3.
//Notice that the answer must be a substring, "pwke" is a subsequence and not a 
//substring.
// 
//
// 
// Constraints: 
//
// 
// 0 <= s.length <= 5 * 10⁴ 
// s consists of English letters, digits, symbols and spaces. 
// 
//
// Related Topics Hash Table String Sliding Window 👍 39719 👎 1893


//leetcode submit region begin(Prohibit modification and deletion)
int lengthOfLongestSubstring(char* s) {
    int count = 0;
    int len = strlen(s);
    if (len == 0) {
        return 0;
    }

    int* arr = (int*) calloc(256, sizeof(int));
    int start = 0;

    for (int i = 0; i < len; i++) {
        if (arr[s[i]] > start) {
            start = arr[s[i]];
        }

        arr[s[i]] = i + 1;
        if (i - start + 1 > count) {
            count = i - start + 1;
        }
    }

    free(arr);
    return count;
}
//leetcode submit region end(Prohibit modification and deletion)
