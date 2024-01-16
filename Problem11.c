#include <stdio.h>
#include <stdlib.h>
int main(){
    int col, row;
    while(scanf("%d %d", &row, &col) != EOF){
        int matrix[row][col];
        for(int i = 0; i < row; i ++){
            for(int j = 0; j < col; j ++){
                scanf("%d", &matrix[i][j]);
            }
        }
        for(int i = 0; i < col; i ++){
            for(int j = 0; j < row; j ++){
                if(j != 0){
                    printf(" ");
                }
                printf("%d", matrix[j][i]);
            }
            printf("\n");
        }
    }
}