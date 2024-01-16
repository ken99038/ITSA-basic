#include <stdio.h>
#include <stdlib.h>
int recursive(int x);
int main(){
    int input, output;
    scanf("%d", &input);
    output = recursive(input);
    printf("%d\n", output);
}
int recursive(int x){
    if(x == 0 || x == 1){
        return x + 1;
    }
    return recursive(x - 1) + recursive(x / 2);
}