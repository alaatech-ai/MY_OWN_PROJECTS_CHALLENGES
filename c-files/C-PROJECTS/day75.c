#include<stdio.h>
#include<stdlib.h>
int main(){
int n, *arr;
printf("enter an integer nb:\n");
scanf(" %d", &n);
arr = (int*) malloc(n*sizeof(int));
if( arr!= NULL){
    printf(" memory allocated succ!\n");
    free(arr);
}
 
    return 0;
}