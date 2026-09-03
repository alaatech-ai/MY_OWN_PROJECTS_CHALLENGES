#include<stdio.h>
int removeduplicates(int* nums, int numssize){
    if(numssize == 0){
        return 0;
    }
    int k =1, i;
    for(i =1; i<numssize; i++){
        if(nums[i] != nums[i-1]){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

  int main() {
   
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    
    int rmv = removeduplicates(arr, size);

   
    printf("Old size: %d\n", size);
    printf("New size (k): %d\n", rmv);
    
    printf("Array after removing duplicates: ");
    int j;
    for( j = 0; j < rmv; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
