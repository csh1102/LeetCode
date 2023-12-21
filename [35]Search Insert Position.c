
int aux(int* nums, int numsSize, int target,int pre) {
    int mid = numsSize / 2;
    if (nums[mid] == target) {
        return mid;
    } else if (nums[mid] > target) {
        if (pre < target) {
            return mid;
        }
        pre = nums[mid];
        return aux(nums, mid, target, pre);
    } else {
        if (pre > target) {
            return mid + 1;
        }
        pre = nums[mid];
        return aux(nums + mid, numsSize - mid, target, pre + mid);
    }
}
int searchInsert(int* nums, int numsSize, int target) {
    if(nums[0] > target){
        return 0;
    }
    if(nums[numsSize - 1] < target){
        return numsSize;
    }
    if(numsSize == 1){
        if(nums[0] >= target){
            return 0;
        }
        return 1;
    }
    int mid = numsSize / 2;
    if (nums[mid] == target) {
        return mid;
    } else if (nums[mid] > target) {
        return aux(nums, mid, target, nums[mid]);
    } else {
        return aux(nums + mid, numsSize - mid, target, nums[mid]);
    }
}
