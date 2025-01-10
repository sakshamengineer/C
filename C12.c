#include<stdio.h>

int main(){
    int i = 1346587;
    int* j = &i;                                   // j is pointing to i (address of i is stored in j)
    int** k = &j;

    printf("The Address of i is %p\n",&i);         // printing address of i through i 
    printf("The Address of i is %p\n",j);          // printing address of i through j
    printf("The Address of j is %p\n",&j);         // printing address of j through j
    printf("The Address of j is %p\n",k);         // printing address of j through k

    printf("the value of address i is %d\n",*&i);  // printing value of address of i through i
    printf("the value of address i is %d\n",*j);   // printing value of address of i through j
    return 0;
}