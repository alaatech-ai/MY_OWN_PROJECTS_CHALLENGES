#include<stdio.h>
#include<stdlib.h>
int removeel(int* nums, int numsize, int val){
    int k =0, i;
   for(i=0; i<numsize; i++){
    if(nums[i] != val){
        nums[k] = nums[i];
        k++; 
    }
}
    return k;

}
int main(){
int A [20], rmv;
int j, size;
printf(" enter arr size and the nb to rmv it:\n");
scanf(" %d %d", &size, &rmv);
printf("Enter %d elements:\n", size);
    for ( j = 0; j < size; j++) {
        scanf("%d", &A[j]);
    }
int rm = removeel(A, size, rmv);

for(j=0; j<rm; j++){
printf(" %d", A[j]);
}

    return 0;
}