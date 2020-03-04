void findIndex(int* nums, int x, int numsSize, int* n_l){
    int j = 0;        
    
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != x){ 
            nums[j] = nums[i];
            j ++;
        }
    }
    *n_l = j;
}

void moveZeroes(int* nums, int numsSize){
    int* n_l = malloc(sizeof(int));
    findIndex(nums, 0, numsSize, n_l);
    int plus = 0;
        
    for(int i = *n_l; i < numsSize; i++) nums[i] = 0;
}
