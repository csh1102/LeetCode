//Given a string s consisting of words and spaces, return the length of the 
//last word in the string. 
//
// A word is a maximal substring consisting of non-space characters only. 
//
// 
// Example 1: 
//
// 
//Input: s = "Hello World"
//Output: 5
//Explanation: The last word is "World" with length 5.
// 
//
// Example 2: 
//
// 
//Input: s = "   fly me   to   the moon  "
//Output: 4
//Explanation: The last word is "moon" with length 4.
// 
//
// Example 3: 
//
// 
//Input: s = "luffy is still joyboy"
//Output: 6
//Explanation: The last word is "joyboy" with length 6.
// 
//
// 
// Constraints: 
//
// 
// 1 <= s.length <= 10⁴ 
// s consists of only English letters and spaces ' '. 
// There will be at least one word in s. 
// 
//
// Related Topics String 👍 4351 👎 227


//leetcode submit region begin(Prohibit modification and deletion)
int lengthOfLastWord(char* s) {
    int count = 0;
    int len = strlen(s);
    if (len == 0) {
        return 0;
    }
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            if (count == 0) {
                continue;
            } else {
                return count;
            }
        }else {
            count++;
        }
    }
    return count;
}
//leetcode submit region end(Prohibit modification and deletion)
