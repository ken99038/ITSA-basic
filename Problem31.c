#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char input[10000];
    while(fgets(input, 10000, stdin)){
        int x = 0;
        int len = 0;
        int temp = 0;
        char *ptr = input;
        int num[11][2];
        while(sscanf(ptr, "%d", &temp)){
            ptr = strpbrk(ptr, " ");
            if(ptr != NULL){
                ptr += 1;
            }
            int bool = 0;
            x++;
            for(int i = 0; i < len; i ++){
                if(temp == num[i][0]){
                    num[i][1] += 1;
                    bool = 1;
                }
            }
            if(!bool){
                num[len][0] = temp;
                num[len][1] = 1;
                len ++;
            }
            if(ptr == NULL){
                break;
            }
        }
        int bool = 0;
        x = x/2;
        for(int i = 0; i < len; i ++){
            if(num[i][1] > x){
                printf("%d\n", num[i][0]);
                bool = 1;
            }
        }
        if(!bool){
            printf("NO\n");
        }
    }
}