

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i < n * 2; i++)
//     {
//         int k = n;
//         if (i <= n)
//         {
//             for (int j = 1; j < 2 * n; j++)
//             {
//                 printf("%d", k);
//                 if (i > j)
//                 {
//                     k--;
//                 }
//                 if (i + j >= 2 * n)
//                 {
//                     k++;
//                 }
//             }
//         }
//         if (i > n)
//         {
//             for (int j = 1; j < n * 2; j++)
//             {
//                 printf("%d",k);
//                 if (i+j<2*n)
//                 {
//                     k--;
//                 }
//                 if (j>=i)
//                 {
//                     k++;
//                 }

//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n, a, b, c, next;

//     scanf("%d %d %d %d", &n, &a, &b, &c);

//     for (int i = 1; i <= n - 3; i++)
//     {
//         next = a + b + c;
//         a = b;
//         b = c;
//         c = next;
//     }

//     if (n ==2)
//     {
//         printf("%d", b);
//     }
//     else if (n == 1)
//     {
//         printf("%d", a);
//     }
//     else if (c == 3)
//     {
//         printf("%d", c);
//     }
//     else
//     {
//         printf("%d", c);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, lenth, width, height;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d %d %d", &lenth, &width, &height);
//         if (height < 41)
//         {
//             printf("%d\n", lenth * width * height);
//         }
//         else
//             continue;
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int X, Y, N,i;
//     scanf("%d %d %d", &X, &Y, &N);

//     for (i = 1; i <= N; i++)
//     {
//         if (i % X == 0 && i % Y == 0)
//         {
//             printf("FizzBuzz\n");
//         }
//         else if (i % X == 0)
//         {
//             printf("Fizz\n");
//         }
//         else if (i % Y == 0)
//         {
//             printf("Buzz\n");
//         }
//         else
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

#include <stdio.h>
void sum(int a, int b)
{
    int sum = a + b + 1;
    printf("%d\n", sum);
}
int main()
{
    int a, b, sum2;
    scanf("%d %d", &a, &b);
    // a=5 & b=15
    sum2 = a + b;
    printf("%d\n", sum2);
    int sum1 = sum(a, b);

    return 0;
}