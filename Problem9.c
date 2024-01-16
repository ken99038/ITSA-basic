#include <stdio.h>
#include <stdlib.h>
int main(){
    int input;
    while(scanf("%d", &input) != EOF){
    int sum = 0;
    for(int i = 0; i <= input; i ++){
        if(i % 3 == 0){
            sum += i;
        }
    }
    printf("%d\n", sum);
    }
}