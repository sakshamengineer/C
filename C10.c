#include<stdio.h>
int sum_n(int);
int main(){
    int b;
    printf("Enter the no. of terms to be sum\t");
    scanf("%d",&b);
    printf("%d",sum_n(b));
    return 0;
}
int sum_n(int a){
    if (a == 1)
    {
        return 1;
    }
    return sum_n(a-1)+a;
}