#include <stdio.h>
#include <stdlib.h>
int main(){
    float input[10];
    float min, max;
    for(int i = 0; i < 10; i ++){
        scanf("%f", &input[i]);
    }
    min = input[0];
    max = input[0];
    for(int i = 0; i < 10; i ++){
        if(input[i] > max){
            max = input[i];
        }
        if(input[i] < min){
            min = input[i];
        }
    }
    printf("maximum:%.2f\nminimum:%.2f\n", max, min);
    return 0;
}