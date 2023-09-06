#include <stdio.h>
int main()
{
    int range, fact;
    float sum;
    sum = 0;
    printf("Enter range");
    scanf("%d", &range);
    for (int i = 1; i <= range; i++)
    {

        fact = 1;
        for (int j = 1; j <= i; j++)
        {

            fact = fact * j;
        }

        float div = i / (float)fact;

        sum = sum + div;
        printf("%d/%d ", i, fact);
        if (i < range)
        {
            printf("+");
        }
        else
            printf("= %f", sum);
    }

    return 0;
}