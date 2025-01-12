#include<stdio.h>
int fib(int);
int main(){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}
int fib(int n){
    if (n==2 || n==1)
    {
        return n-1;
    }
    return fib(n-1) + fib(n-2);
    
}