int* findErrorNums(const int* nums, int numsSize, int* returnSize) {
    int set[10000] = {0};
    int* result = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    if(numsSize == 2)
    {
        result[0] = 1;
        result[1] = 2;
        return result;
    }
    for (int i = 0; i < numsSize; i++) {
        if (set[nums[i] - 1] == 0) {
            set[nums[i] - 1] = nums[i];
        }else if(set[nums[i] - 1]!=0){
            result[0] = set[nums[i] - 1];
            result[1] = i+1;
            return result;
        }
    }
    return result;
}