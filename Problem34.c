#include <stdio.h>
#include <stdlib.h>
int main(){
    double hight;
    int gender;
    double weight;
    while(scanf("%lf %d", &hight, &gender) != EOF){
        if(gender == 1)
            weight = (hight - 80) * 0.7;
        else
            weight = (hight - 70) * 0.6;
        printf("%.1f\n", weight);
    }
    return 0;
}