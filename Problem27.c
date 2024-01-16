#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char end[] = "0000";
    char ans[5];
    scanf("%s", ans);
    char input[5];
    while(scanf("%s", input)){
        if(strcmp(end, input) == 0){
            break;
        }

        int A = 0;
        int B = 0;
        for(int i = 0; i < 4; i ++){
            if(input[i] == ans[i]){
                A ++;
            }
        }
        for(int i = 0; i < 4; i ++){
            for(int j = 0; j < 4; j ++){
                if(i == j){
                    continue;
                }
                else if(input[i] == ans[j]){
                    B ++;
                }
            }
        }
        printf("%dA%dB\n", A, B);
    }
    return 0;
}