// #include <stdio.h>
// int main(){
// int range,fact=1;
// printf("Enter a number you want to find factorial:");
// scanf("%d",&range);

//     for (int j = 1; j <=range; j++)
//     {

//         fact=fact*j;
//     }

// printf("%d",fact);
// return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int range;
//     float fact = 1;
//      float sum =0;
//     printf("Enter range of the series");
//     scanf("%d", &range);
//     for (int i = 1; i <= range; i++)
//     {
//         fact = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             fact = fact * j;
//         }

//         // float div = 1;
     
//         float div = i / fact;
//         sum = sum + div;

//         printf("%d/ %f ", i, fact);
//         if (i < range)
//         {
//             printf("+");
//         }
//         else
//             printf("= %f", sum);
//     }

//     return 0;
// }





// #include <stdio.h>
// int main()
// {
//     int range, fact;
//     float sum;
//     sum = 0;
//     printf("Enter range");
//     scanf("%d", &range);
//     for (int i = 1; i <= range; i++)
//     {
//         fact = 1;

//         for (int j = 1; j <= i; j++)
//         {
//             fact = fact * j;
//         }

//         float div = i / (float)fact;

//         sum = sum + div;
//         printf("%d/%d ", i, fact);
//         if (i < range)
//         {
//             printf("+");
//         }
//         else
//             printf("= %f", sum);
//     }

//     return 0;
// }



#include <stdio.h>
#include <string.h>
int avg(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}
int main()
{
    int i = 0;
    int a, c, g, t;
    a = c = g = t = 0;
    char s1[1000], ch;
    gets(s1);
    while ((ch = s1[i]) != '\0')
    {
        if (ch == 'T')
        {
            t++;
        }
        else if (ch == 'A')
        {
            a++;
        }
        else if (ch == 'C')
        {
            c++;
        }
        else if (ch == 'G')
        {
            g++;
        }
        i++;
    }
    int first = avg(t, a);
    int second = avg(c, g);
    int third = avg(first, second);

    printf("%d", third);
    return 0;
}