#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int N;
    char input1[31], input2[31];
    char sum[32];
    scanf("%d", &N);
    for(int i = 0; i < N; i ++){
        scanf("%s", input1);
        scanf("%s", input2);
        memset(sum, '\0', sizeof(sum) - 1);
        int x1 = strlen(input1) - 1;
        int x2 = strlen(input2) - 1;
        int carry = 0;
        int x = x1 + 1;
        if(x2 > x1){
            x = x2 + 1;
        }
        for(int j = 0; j < 32; j ++){
            if(x <= 0){
                break;
            }
            int temp = 0;
            if(x1 >= 0){
                temp += input1[x1] - '0';
            }
            if(x2 >= 0){
                temp += input2[x2] - '0';
            }
            temp += carry;
            if(temp >= 10){
                temp -= 10;
                carry = 1;
            }else {
                carry = 0;
            }
            sum[x] = temp + '0';
            
            x --; x1 --; x2 --;
        }
        sum[0] = carry + '0';
        if(sum[0] == '0'){
            printf("%s\n", &sum[1]);
        }
        else{
            printf("%s\n", sum);
        }
    }
    return 0;
}