#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {

        for (int k = 1; k <= r; k++)
        {
            if (k == r || k == r-i+1 || i == r)
            {
                printf("*");
            }
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}