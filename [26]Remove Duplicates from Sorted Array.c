int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 1) {
        return 1;
    }
    int j = 1;
    int repeat = 0;
    for (int i = 1; i < numsSize && j < numsSize; i++) {
        int temp = nums[i];
        if (temp == nums[i-1]) {
            repeat++;
        } else{
            nums[j++] = temp;
        }
    }
    if(repeat == 0){
        return numsSize;
    }
    nums[j] = '\0';
    numsSize -= repeat;
    return numsSize;
}
