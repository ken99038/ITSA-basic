#include <stdio.h>
#include <stdlib.h>
int main(){
    char input[11];
    int P = 0;
    scanf("%s", input);
    int x;
    switch(input[0]) {
        case 'A':
            x = 10;
            break;
        case 'B':
            x = 11;
            break;
        case 'C':
            x = 12;
            break;
        case 'D':
            x = 13;
            break;
        case 'E':
            x = 14;
            break;
        case 'F':
            x = 15;
            break;
        case 'G':
            x = 16;
            break;
        case 'H':
            x = 17;
            break;
        case 'J':
            x = 18;
            break;
        case 'K':
            x = 19;
            break;
        case 'L':
            x = 20;
            break;
        case 'M':
            x = 21;
            break;
        case 'N':
            x = 22;
            break;
        case 'P':
            x = 23;
            break;
        case 'Q':
            x = 24;
            break;
        case 'R':
            x = 25;
            break;
        case 'S':
            x = 26;
            break;
        case 'T':
            x = 27;
            break;
        case 'U':
            x = 28;
            break;
        case 'V':
            x = 29;
            break;
        case 'X':
            x = 30;
            break;
        case 'Y':
            x = 31;
            break;
        case 'W':
            x = 32;
            break;
        case 'Z':
            x = 33;
            break;
        case 'I':
            x = 34;
            break;
        case 'O':
            x = 35;
            break;
        default:
            break;
    }
    int digit1, digit2;
    digit1 = x / 10;
    digit2 = x % 10;
    P += digit1;
    input[0] = digit2 + 48;
    for(int i = 0, j = 9; i < 9; i ++, j --){
        P += (input[i] - 48) * j;
    }
    P += input[9] - 48;
    if(P % 10){
        printf("WRONG!!!\n");
    }
    else{
        printf("CORRECT!!!\n");
    }
}