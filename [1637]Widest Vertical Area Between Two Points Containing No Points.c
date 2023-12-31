//Given n points on a 2D plane where points[i] = [xi, yi], Return the widest 
//vertical area between two points such that no points are inside the area. 
//
// A vertical area is an area of fixed-width extending infinitely along the y-
//axis (i.e., infinite height). The widest vertical area is the one with the 
//maximum width. 
//
// Note that points on the edge of a vertical area are not considered included 
//in the area. 
//
// 
// Example 1: 
// 
// 
//Input: points = [[8,7],[9,9],[7,4],[9,7]]
//Output: 1
//Explanation: Both the red and the blue area are optimal.
// 
//
// Example 2: 
//
// 
//Input: points = [[3,1],[9,0],[1,0],[1,4],[5,3],[8,8]]
//Output: 3
// 
//
// 
// Constraints: 
//
// 
// n == points.length 
// 2 <= n <= 10⁵ 
// points[i].length == 2 
// 0 <= xi, yi <= 10⁹ 
// 
//
// Related Topics Array Sorting 👍 334 👎 752


//leetcode submit region begin(Prohibit modification and deletion)
int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int maxWidthOfVerticalArea(int** points, int pointsSize, int* pointsColSize) {
    int *arr = (int *)malloc(sizeof(int) * pointsSize);
    for (int i = 0; i < pointsSize; i++) {
        arr[i] = points[i][0];
    }
    qsort(arr, pointsSize, sizeof(int), cmp);
    int max = 0;
    for (int i = 1; i < pointsSize; i++) {
        int tmp = arr[i] - arr[i - 1];
        max = tmp > max ? tmp : max;
    }
    free(arr);
    return max;
}

//leetcode submit region end(Prohibit modification and deletion)
