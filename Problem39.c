#include <stdio.h>
#include <stdlib.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i ++){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int sum = a + b + c;
        if(sum >= 220){
            printf("P\n");
        }
        else if(a >= 60 && b >= 60 && c >= 60){
            printf("P\n");
        }
        else if(a >= 80 || b >= 80 || c >= 80){
            printf("M\n");
        }
        else if((a >= 60 && b >= 60) || (b >= 60 && c >= 60) || (a >= 60 && c >= 60)){
            printf("M\n");
        }
        else{
            printf("F\n");
        }
    }
}