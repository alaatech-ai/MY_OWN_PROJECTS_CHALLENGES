#include<stdio.h>
#include<stdlib.h>
float average(int arr[], int n){
    float sum =0, avg;
    int i;
    for (i=0; i<n; i++){
sum += arr[i];
 avg = sum /n;}
    
    return avg;
}
int findfirstocc(int arr[], int n, int x){
    int i;
    for(i =0; i<n; i++){
        if(arr[i]==x)
          return i;
    
    }
    return -1;
}
int findsecmax(int arr[], int n){
    int max=arr[0];
    int secmax=0;
    int i;
    for(i=0; i<n; i++){
        if(arr[i]>max){
         secmax = max;
         max =arr[i];}
        else if(arr[i]>secmax && arr[i]!= max){
           secmax = arr[i];
    }}
    return secmax;
}
int removedup(int arr[], int n){
    int i,j,k;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(k=j; k<n; k++){
                    arr[k]=arr[k+1];
                    n--;
                    j--;
                }
            }
        }
    }
    return n;
}
int main(){
    int arr[100], i;
    int size;
    printf("enter the size:\n");
    scanf(" %d", &size);
    printf("enter ur array:\n");
    for(i=0; i<size; i++) {
    scanf(" %d", &arr[i]);}
    float calavg = average(arr, size );
    printf("the avg is: %.2f\n", calavg);
    int x;
    printf("enter the occ nb:\n");
    scanf(" %d", &x);
    int occ = findfirstocc(arr, size, x);
    printf("the index is:%d\n", occ);
    int findmx = findsecmax(arr, size);
    printf(" the second max is:%d\n", findmx);
    int dup = removedup(arr, size);
    printf("new size:%d\n", dup);
    return 0;

}