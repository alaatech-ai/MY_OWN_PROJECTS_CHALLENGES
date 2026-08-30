#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* longestCommonPrefix(char** strs, int strsSize) {
        int i, j, k;
    int shortest = strlen(strs[0]);
    for( i=1 ; i<strsSize; i++){
        if(strlen(strs[i])< shortest){
              shortest  =strlen(strs[i]);
        }
    }

    for(i=0; i<shortest; i++){
        for(j =0; j<strsSize; j++){
            if(strs[j][i] != strs[0][i]){
            char* matched = malloc((i+1));
            for( k=0; k<i; k++){
                matched[k] = strs[0][k];}
                matched[i] = '\0';
            
                 return matched;
            }
        }
    }
    char* res = malloc((shortest+1));
    for(i=0; i<shortest; i++){
          res[i]  = strs[0][i];
    }
    res[shortest] = '\0';
    return res;
}

 int main(){
 int strsSize,i;
    printf("kam kelme badak tedkhle?:\n ");
    scanf("%d", &strsSize);

    char** strs = malloc(strsSize * sizeof(char*));

    for (i = 0; i < strsSize; i++) {
        char temp[100];
        printf("kelme %d: ", i + 1);
        scanf("%s", temp);

        strs[i] = malloc(strlen(temp) + 1);
        strcpy(strs[i], temp);
    }

    char* result = longestCommonPrefix(strs, strsSize);
    printf("Longest common prefix: %s\n", result);


    return 0;
 }