#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char input[10000];
    char inverse[10000];
    while(scanf("%s", input) != EOF){
        memset(inverse, 0, sizeof(inverse));
        int len = strlen(input);
        for(int i = 0, j = len - 1; i < len; i ++, j --){
            inverse[i] = input[j];
        }
        if(strcmp(inverse, input) == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}