int* resultArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* arr1 = (int*)malloc(numsSize*sizeof(int));
    int* arr2 = (int*)malloc(numsSize*sizeof(int));
    int* result = (int*)malloc(numsSize*sizeof(int));
    int i1=0,i2=0;
    arr1[i1++] = nums[0];
    arr2[i2++] = nums[1];
    for(int i=2; i<numsSize;i++){
        if(arr1[i1-1]>arr2[i2-1]){
            arr1[i1++] = nums[i];
        }
        else{
            arr2[i2++] = nums[i];
        }
    }
    for(int i=0;i<i1;i++){
        result[i] = arr1[i];
    }
    for(int i=i1;i<numsSize;i++){
        result[i] = arr2[i-i1];
    }
    return result;
}
