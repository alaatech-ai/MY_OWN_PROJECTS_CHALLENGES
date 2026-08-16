#include<stdio.h>
#include<stdlib.h>

int sum( int n, int *p){
 int sm =0;
 int i;
 for( i=0; i<n; i++){
   sm += p[i];
 }
 return sm;
}
int max(int *p,  int n){
    int i;
int mx =p[0];
for(i=0; i<n; i++){
    if(p[i]>mx){
       mx=p[i];
    }
}
return mx;
}
int main(){
    int m, i, *p;
    printf(" how much nbrs do u want enter?\n");
    scanf("%d", &m);
    p = (int *)malloc(m* sizeof(int));
    printf("enter ur nbrs:\n");
    for(i=0; i<m; i++){
        scanf("%d", &p[i]);
    }
    printf("sum= %d\n", sum(m, p));
    printf("max= %d\n", max(p, m));
free(p);
    return 0;
}