#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int b = 0;
    if (a <= 1)
    {
        printf("a is neither prime nor composite");
    }
    else
    {
        int i = 2;
        do
        {
            if (a % i == 0)
            {
                b += 1;
            }
            i++;
        }while(i < a);
        if (b > 0)
        {
            printf("a is not prime no.");
        }
        else
        {
            printf("a is prime no.");
        }
    }
    return 0;
}