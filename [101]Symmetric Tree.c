//Given the root of a binary tree, check whether it is a mirror of itself (i.e.,
// symmetric around its center). 
//
// 
// Example 1: 
// 
// 
//Input: root = [1,2,2,3,4,4,3]
//Output: true
// 
//
// Example 2: 
// 
// 
//Input: root = [1,2,2,null,3,null,3]
//Output: false
// 
//
// 
// Constraints: 
//
// 
// The number of nodes in the tree is in the range [1, 1000]. 
// -100 <= Node.val <= 100 
// 
//
// 
//Follow up: Could you solve it both recursively and iteratively?
//
// Related Topics Tree Depth-First Search Breadth-First Search Binary Tree 👍 14
//672 👎 353


//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 bool aux(struct TreeNode* left, struct TreeNode* right) {
    if(!left && !right) {
        return true;
    }
    if(!left || !right) {
        return false;
    }
    return left->val == right->val && aux(left->left, right->right) && aux(left->right, right->left);
 }
bool isSymmetric(struct TreeNode* root) {
    if(!root) {
        return true;
    }
    return aux(root->left, root->right);
   }
//leetcode submit region end(Prohibit modification and deletion)
