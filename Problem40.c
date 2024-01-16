#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
    char input[11];
    int num[10]; 
    for(int i = 0; i < 10; i ++){
        scanf("%c", &input[i]);
        getchar();
        if(isdigit(input[i])){
            num[i] = atoi(&input[i]);
        }
        else if(input[i] == 'X'){
            num[i] = 10;
        }
    }
    int num1[10];
    for(int i = 0; i < 10; i ++){
        int temp = 0;
        for(int j = 0; j <= i; j ++){
            temp += num[j];
        }
        num1[i] = temp;
    }
    int num2[10];
    for(int i = 0; i < 10; i ++){
        int temp = 0;
        for(int j = 0; j <= i; j ++){
            temp += num1[j];
        }
        num2[i] = temp;
    }
    if(num2[9] % 11 == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}