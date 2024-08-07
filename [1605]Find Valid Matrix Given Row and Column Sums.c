//You are given two arrays rowSum and colSum of non-negative integers where
//rowSum[i] is the sum of the elements in the iᵗʰ row and colSum[j] is the sum of the
//elements of the jᵗʰ column of a 2D matrix. In other words, you do not know the
//elements of the matrix, but you do know the sums of each row and column.
//
// Find any matrix of non-negative integers of size rowSum.length x colSum.
//length that satisfies the rowSum and colSum requirements.
//
// Return a 2D array representing any matrix that fulfills the requirements.
//It's guaranteed that at least one matrix that fulfills the requirements exists.
//
//
// Example 1:
//
//
//Input: rowSum = [3,8], colSum = [4,7]
//Output: [[3,0],
//         [1,7]]
//Explanation:
//0ᵗʰ row: 3 + 0 = 3 == rowSum[0]
//1ˢᵗ row: 1 + 7 = 8 == rowSum[1]
//0ᵗʰ column: 3 + 1 = 4 == colSum[0]
//1ˢᵗ column: 0 + 7 = 7 == colSum[1]
//The row and column sums match, and all matrix elements are non-negative.
//Another possible matrix is: [[1,2],
//                             [3,5]]
//
//
// Example 2:
//
//
//Input: rowSum = [5,7,10], colSum = [8,6,8]
//Output: [[0,5,0],
//         [6,1,0],
//         [2,0,8]]
//
//
//
// Constraints:
//
//
// 1 <= rowSum.length, colSum.length <= 500
// 0 <= rowSum[i], colSum[i] <= 10⁸
// sum(rowSum) == sum(colSum)
//
//
// Related Topics Array Greedy Matrix 👍 1922 👎 78


//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int min(int a, int b) {
    return a < b ? a : b;
}
int **restoreMatrix(int *rowSum, int rowSumSize, int *colSum, int colSumSize, int *returnSize, int **returnColumnSizes) {
    *returnSize = rowSumSize;

    *returnColumnSizes = (int *)malloc(sizeof(int) * rowSumSize);
    for (int i = 0; i < rowSumSize; i++) {
        (*returnColumnSizes)[i] = colSumSize;
    }

    int **res = (int **) malloc(sizeof(int *) * rowSumSize);
    for (int i = 0; i < rowSumSize; i++) {
        res[i] = (int *) malloc(sizeof(int) * colSumSize);
    }

    for (int i = 0; i < rowSumSize; i++) {
        for (int j = 0; j < colSumSize; j++) {
            res[i][j] = min(rowSum[i], colSum[j]);
            rowSum[i] -= res[i][j];
            colSum[j] -= res[i][j];
        }
    }

    return res;
}
//leetcode submit region end(Prohibit modification and deletion)
