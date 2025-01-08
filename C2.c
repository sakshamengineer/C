#include<stdio.h>

int main(){
    int a;
    float b;
    printf("Enter your salary amount:\t");
    scanf("%d",&a);
    if (a<=250000)
    {
        b = 0;
    }
    else if (a>=250000 && a<500000)
    {
        b = 0.05*(a-250000);
    }
    else if (a>=500000 && a<1000000)
    {
        b = 0.05*250000 + 0.2*(a-500000);
    }
    else
    {
        b = 0.05*250000 + 0.2*500000 + 0.3*(a-1000000);
    }
    printf("%.2f",b);
    return 0;
}