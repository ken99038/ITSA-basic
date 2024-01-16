#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
double round(double a);
int main(){
    char input[1000];
    double sum;
    int size;
    double number;
    char *ptr;
    double avg;
    while(fgets(input, 1000, stdin) != NULL){
        sum = 0;
        size = 0;
        ptr = input;
        while(sscanf(ptr, "%lf", &number) != EOF){
            ptr = strpbrk(ptr, " ");
            sum += number;
            size ++;
            if(ptr == NULL){
                break;
            }
            else{
                ptr ++;
            }
        }
        avg = sum / size;
        avg = round(avg);
        printf("Size: %d\nAverage: %.3f\n", size, avg);
    }
}
double round(double a){
    a *= 10000;
    int x = (int )a;
    if( x % 10 >= 5){
        x ++;
    }
    a = x / (double)10000;
    return a;
}