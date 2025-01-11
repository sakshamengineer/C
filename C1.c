#include<stdio.h>

int main(){
    int a,b;
    printf("enter the marks of 1st subject:\t");
    scanf("%d",&a);
    printf("enter the marks of 2nd subject:\t");
    scanf("%d",&b);
    printf("enter the marks of 3rd subject:\t");
    scanf("%d",&c);
    int d =(a+b+c)/3;
    if (a<33 || b<33 || c<33)
    {
        printf("You are failed due to low score in particular subject");
    }
    else{
        if (d<40)
        {
            printf("You are failed due to overall low percentage");
        }
        else{
            printf("You are passed!");
        }
    } 
    return 0;
}
