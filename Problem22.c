#include <stdio.h>
#include <stdlib.h>
int main(){
    int matrix[3][3];
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int bool = 0;

    for(int i = 0; i < 3; i ++){
        if(matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2]){
            bool = 1;
            break;
        }
    }
    for(int i = 0; i < 3; i ++){
        if(matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i]){
            bool = 1;
            break;
        }
    }
    if(matrix[0][0] == matrix[1][1] && matrix[0][0] == matrix[2][2]){
        bool = 1;
    }
    if(matrix[2][0] == matrix[1][1] && matrix[2][0] == matrix[0][2]){
        bool = 1;
    }
    if(bool){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}