#include<stdio.h>
#include<string.h>
void printrword(char *start, char *end){
    if(end<=start){
        return ;
    }
    char tem = *start;
        *start = *end;
        *end  = tem;
    return printrword(start+1, end-1);
}
int main(){
    char word[110];
    printf("enter a word:\n");
    scanf(" %[^\n]", word);
    char *start = word;
    char *end = word + strlen(word)-1;
    printrword(start, end);
    printf("the rev is:%s \n", word);

    return 0;


}