#include<stdio.h>
#include<stdlib.h>

int main(){
int n;
int *p;
printf(" how much nbrs do u wanna enter?\n");
scanf(" %d", &n);
p = (int*)malloc(n*sizeof(int));
int i;
printf("enter ur nbrs:\n");
 int sum = 0;
int max;
for ( i=0; i<n; i++){
    scanf(" %d", &p[i]);
    max = p[0];
    sum += p[i];
    if(p[i]>max){
        max = p[i];
    }}
    printf("sum= %d\n", sum);
    printf("max= %d\n", max);
    free(p);


return 0;
}