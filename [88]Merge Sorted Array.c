void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    if(m == 0){
        for(int i = 0; i < n; i++)
            nums1[i] = nums2[i];
        return;
    }
    if(n == 0)
        return;

    int *res = (int *)malloc(sizeof(int) * (m + n));
    int i = 0;
    int j = 0;
    int k = 0;
    while(i < m && j < n){
        if(nums1[i] < nums2[j]){
            res[k++] = nums1[i++];
        } else{
            res[k++] = nums2[j++];
        }
    }
    while(i < m){
        res[k++] = nums1[i++];
    }
    while(j < n){
        res[k++] = nums2[j++];
    }
    for(i = 0; i < m + n; i++){
        nums1[i] = res[i];
    }
    free(res);
    nums1Size = m + n;
}