#include <stdio.h>
#include <stdlib.h>
int main(){
    int money;
    int a1, a2, a3;
    scanf("%d,%d,%d,%d", &money, &a1, &a2, &a3);
    int price = 0;
    price += a1 * 15;
    price += a2 * 20;
    price += a3 * 30;
    money -= price;
    if(money < 0){
        printf("0\n");
        return 0;
    }
    int b1, b2, b3;
    b1 = money / 50;
    money = money % 50;
    b2 = money / 5;
    money %= 5;
    b3 = money;
    printf("%d,%d,%d\n", b3, b2, b1);
}