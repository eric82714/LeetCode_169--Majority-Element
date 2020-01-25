bool isTrue(int** array, int size, int key) { 
    for(int i = 0; i < size; i++) {
        if(array[i][0] == key) {
             return true;		 
        }
    }
    return false;            
}

int search(int** array, int size, int key) { 
    for(int i = 0; i < size; i++) {
        if(array[i][0] == key) {
             return i;		 
        }
    }
    return -1;            
}

int majorityElement(int* nums, int numsSize){
    int times = numsSize / 2;            
    int i = 0;
    int index = 0;
    
    int tmpSize = 100;
    int** tmp = calloc(tmpSize, sizeof(int*));
    for(int j = 0; j < tmpSize; j++) {
        tmp[j] = (int*)calloc(2, sizeof(int));
    }
        
    for(i; i < numsSize; i++) {
        if(isTrue(tmp, tmpSize, nums[i])) {
            int address = search(tmp, tmpSize, nums[i]);
            tmp[address][1] ++;
            if(tmp[address][1] > times) break;
        }
        else {
            tmp[index][0] = nums[i];
            tmp[index][1] ++;
            if(tmp[index][1] > times) break;
            index ++;
        }   
    }
    
    return nums[i];
}
