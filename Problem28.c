#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char special[9], grand[3][9];
    long long int money = 0;
    int num;
    int winnig[7] = {0, 0, 0, 0, 0, 0, 0};
    scanf("%s", special);
    for(int i = 0; i < 3; i ++){
        scanf("%s", grand[i]);
    }
    char input[9];
    scanf("%d", &num);
    for(int i = 0; i < num; i ++){
        scanf("%s", input);
        int win = 0;
        if(strcmp(special, input) == 0){
            money += 2000000;
            winnig[0] ++;
            win = 1;
        }
        if(win){
            continue;
        }
        for(int j = 0; j < 3; j ++){
            if(strcmp(grand[j], input) == 0){
                money += 200000;
                winnig[1] ++;
                win = 1;
                break;
            }
        }
        if(win){
            continue;
        }
        for(int j = 0; j < 3; j ++){
            if(strcmp(&grand[j][1], &input[1]) == 0){
                money += 40000;
                winnig[2] ++;
                win = 1;
                break;
            }
        }
        if(win){
            continue;
        }
        for(int j = 0; j < 3; j ++){
            if(strcmp(&grand[j][2], &input[2]) == 0){
                money += 10000;
                winnig[3] ++;
                win = 1;
                break;
            }
        }
        if(win){
            continue;
        }
        for(int j = 0; j < 3; j ++){
            if(strcmp(&grand[j][3], &input[3]) == 0){
                money += 4000;
                winnig[4] ++;
                win = 1;
                break;
            }
        }
        if(win){
            continue;
        }
        for(int j = 0; j < 3; j ++){
            if(strcmp(&grand[j][4], &input[4]) == 0){
                money += 1000;
                winnig[5] ++;
                win = 1;
                break;
            }
        }
        if(win){
            continue;
        }
        for(int j = 0; j < 3; j ++){
            if(strcmp(&grand[j][5], &input[5]) == 0){
                money += 200;
                winnig[6] ++;
                win = 1;
                break;
            }
        }
        if(win){
            continue;
        }
    }
    for(int i = 0; i < 7; i ++){
        if(i)
            printf(" ");
        printf("%d", winnig[i]);
    }
    printf("\n");
    printf("%lld\n", money);

}