#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char input[101];
    fgets(input, 101, stdin);
    int len = strlen(input);
    int num[26];
    for(int i = 0; i < 26; i ++){
        num[i] = 0;
    }
    int x;
    for(int i = 0; i < len; i ++){
        if(isupper(input[i])){
            input[i] = tolower(input[i]);
        }
        x = input[i] - 'a';
        num[x] ++;
    }
    int tok = 0;
    strtok(input, " ,.");
    tok ++;
    while(strtok(NULL, " ,.")){
        tok ++;
    }
    printf("%d\n", tok);
    for(int i = 0; i < 26; i ++){
        if(num[i] != 0){
            printf("%c : %d\n", i + 'a', num[i]);
        }
    }
}