int main(){
    int i, j, n;
    do{
        printf("enter n (2<=n <=8):\n");
        scanf("%d", &n);
    }while( n<2 || n>8);
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf(" %d", i);
        }
        printf("\n");
    }

    return 0;
}
