#include <stdio.h>
#include <stdlib.h>
int main(){
    int year;
    while(scanf("%d", &year) != EOF){
        int bool = 0;
        if(year % 400 == 0){
            bool = 1;
        }
        else if(year % 100 == 0){
            bool = 0;
        }
        else if(year % 4 == 0){
            bool = 1;
        }
        if(bool == 1){
            printf("Bissextile Year\n");
        }
        else{
            printf("Common Year\n");
        }
    }
}