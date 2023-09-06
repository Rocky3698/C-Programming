#include <string.h>
#include <stdio.h>
int main()
{
    char s1[1001];
    int t, lenth, len, count = 0;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        count = 0;
        scanf("\n");
        scanf("%[^\n]%*c", s1);
        lenth = strlen(s1);
        len = lenth / 2;
        if (lenth % 2 == 0)
        {

            for (int i = 0; i < lenth/2; i++)
            {
                if (s1[i] == s1[len + i])
                {
                    count++;
                }
            }
            if (count == len)
            {
                printf("YES\n");
            }
            else if (count < len)
            {
                printf("NO\n");
            }
        }

        else   printf("NO\n");
    }
    return 0;
}
