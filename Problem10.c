#include <stdio.h>
#include <stdlib.h>
int gcb(int a, int b);
int main(){
    int input1, input2, output;
    scanf("%d %d", &input1, &input2);
    output = gcb(input1, input2);
    printf("%d\n", output);
}
int gcb(int a, int b){
    if(a % b == 0){
        return b;
    }
    else{
        return gcb(b, a % b);
    }
}