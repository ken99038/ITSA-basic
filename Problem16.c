#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char child[129];
    char str[513];
    scanf("%s", child);
    scanf("%s", str);
    char *ptr = &str[0];
    int num = 0;
    while(ptr != NULL){
        ptr = strstr(ptr, child);
        if(ptr != NULL){
            num ++;
            ptr ++;
        }
    }
    printf("%d\n", num);
}