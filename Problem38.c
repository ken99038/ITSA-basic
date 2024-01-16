#include <stdio.h>
#include <stdlib.h>
int main(){
    int ele;
    scanf("%d", &ele);
    double price1 = 0, price2 = 0;

    if(ele >= 700){
        price1 += (double)200 * 4.97;
        price2 += (double)200 * 4.01;
        
        price1 += (double)170 * 4.39;
        price2 += (double)170 * 3.61;

        price1 += (double)210 * 3.02;
        price2 += (double)210 * 2.68;

        price1 += (double)120 * 2.1;
        price2 += (double)120 * 2.1;

        ele -= 700;
        price1 += (double)ele * 5.63;
        price2 += (double)ele * 4.50;
    }
    else if (ele >= 500){
        price1 += (double)170 * 4.39;
        price2 += (double)170 * 3.61;

        price1 += (double)210 * 3.02;
        price2 += (double)210 * 2.68;

        price1 += (double)120 * 2.1;
        price2 += (double)120 * 2.1;

        ele -= 500;
        price1 += (double)ele * 4.97;
        price2 += (double)ele * 4.01;
    }
    else if(ele >= 330){
        price1 += (double)210 * 3.02;
        price2 += (double)210 * 2.68;

        price1 += (double)120 * 2.1;
        price2 += (double)120 * 2.1;

        ele -= 330;
        price1 += (double)ele * 4.39;
        price2 += (double)ele * 3.61;
    }
    else if(ele >= 120){
        price1 += (double)120 * 2.1;
        price2 += (double)120 * 2.1;

        ele -= 120;
        price1 += (double)ele * 3.02;
        price2 += (double)ele * 2.68;
    }
    else{
        price1 += (double)ele * 2.1;
        price2 += (double)ele * 2.1;
    }
    printf("Summer months:%.2lf\n", price1);
    printf("Non-Summer months:%.2lf\n", price2);
}