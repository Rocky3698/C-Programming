#include <stdio.h>
int main()
{
    int r1, c1, r2, c2, sum = 0;

    printf("Enter rows & columns for the first matrix");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows & columns for the second matrix");
    scanf("%d %d", &r2, &c2);
    int first[r1][c1], second[r2][c2], result[r1][c2];
    while (c1 != r2)
    {
        printf("Error!");
        printf("Enter rows & columns for the first matrix");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows & columns for the second matrix");
        scanf("%d %d", &r2, &c2);
    }
    printf("Enter Elements for first matrix\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("First[%d][%d]=", i, j);
            scanf("%d", &first[i][j]);
        }
    }
    printf("\nEnter Elements for second matrix\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("Second[%d][%d]=", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                sum += first[i][k] + second[k][i];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("Multiplied matrix\n");
    for (int i = 0; i < r1; i++)
    {
        printf("\t");
        for (int j = 0; j < c2; j++)
        {
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}