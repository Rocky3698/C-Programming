#include <stdio.h>
#include <string.h>
int main()
{
    int a, b;
    int c1, c2;
    c1 = 0;
    c2 = 0;
    char s1[5];
    char s2[5];
    scanf("%d %d", &a, &b);
    scanf("\n");
    if (a > b)
    {
        printf("Argentina");
    }

    else if (b > a)
    {
        printf("Brazil");
    }
    else
    {
        gets(s1);
        scanf("%s", &s2);
    }
    while (c1 == c2)
    {
        c1 = 0;
        c2 = 0;
        int i = 0;
        int j = 0;
        while (s1[i] != '\0')
        {
            if (s1[i] == '1')
            {
                c1++;
            }

            i++;
        }
        while (s2[j] != '\0')
        {
            if (s2[j] == '1')
            {
                c2++;
            }
            j++;
        }

        if (c1 > c2)
        {
            printf("Argentina");
            break;
        }
        else if (c2 > c1)
        {
            printf("Brazil%d%d", c1, c2);
            break;
        }
        else
            scanf("%s %s", &s1, &s2);
    }

    return 0;
}