// problem1
// #include <stdio.h>
// int main(){
// int num;
// printf("Enter a intiger number:\n");
// scanf("%d",&num);
// for (int i = 0; i <=num; i++)
// {
//     if (i%2==0)
// {
//     printf("%d Even.\n",i);

// }
// else
// printf("%d odd.\n",i);

// }

// return 0;
// }
// problem 02
// #include <stdio.h>
// int main()
// {
//     int T;
//     char n[11],ch;
//     printf("ENter line number");
//     scanf("%d", &T);
//     for (int i = 1; i <= T; i++)
//     {
//         scanf("%s", &n);
//         ch=n[9];
//         // printf("%c",ch);
//         if (ch=='2'||ch=='4'||ch=='6'||ch=='8'||ch=='0')
//         {
//             printf("Even");
//         }
//         else
//             printf("Odd");
//     }

//     return 0;
// }
// prob3
// #include <stdio.h>
// int main()
// {

//     for (int i = 1000; i >= 1; i--)
//     {

//         if (i < 1000 && i % 5 == 0)
//         {
//             printf("\n");
//         }
//         printf("%d\t", i);
//     }

//     return 0;
// }
// prob4
// #include <stdio.h>
// int main()
// {
//     int t, num;
//     scanf("%d", &t);
//     for (int i = 1; i <= t; i++)
//     {
//         scanf("%d", &num);
//         printf("Case %d:", i);
//         for (int j = 1; j <= num; j++)
//         {
//             if (num % j == 0)
//             {
//                 printf("  %d", j);
//             }

//         }
//         printf("\n");
//     }

//     return 0;
// }
// prob5. you can use another for loop without using 2 if condition
// #include <stdio.h>
// int main()
// {
//     int t, row, count = 0;
//     scanf("%d", &t);
//     for (int i = 1; i <= t; i++)
//     {
//         scanf("%d", &row);
//         for (int j = 1; j <= row; j++)
//         {
//             printf("*");
//             if (j == row)
//             {
//                 j = 0;
//                 count++;
//                 printf("\n");
//             }
//             if (count==row)
//             {
//                 break;
//             }

//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int test, row, count = 0, count1 = 0;
//     scanf("%d", &test);
//     scanf("%d", &row);
//     for (int i = 1; i <= row; i++)
//     {
//         printf("*");
//         if (i == row)
//         {
//             i = 0;
//             printf("\n");
//             count++;
//         }

//         if (count == row && count1 != test)
//         {
//             count1++;
//             if (count1 == test)
//             {
//                 break;
//             }
//             count = 0;
//             scanf("%d", &row);
//         }
//     }

//     return 0;
// }
// prob6
// #include <stdio.h>
// int main()
// {
//     int test, num, sum=0, msd, lsd;
//     scanf("%d",&test);
//     for (int i = 1; i <= test; i++)
//     {
//         scanf("%d", &num);
//         msd = num % 10;
//         while (num != 0)
//         {
//             lsd = num % 10;
//             num = num / 10;
//         }
//         sum=msd+lsd;
//         printf("sum = %d\n",sum);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char s1[1000];
//     int test, j, count = 0;
//     printf("Enter how many test you want to do:\n");
//     scanf("%d", &test);

//     for (int i = 1; i <= test; i++)
//     {scanf("\n");
//         gets(s1);
//         j = 0;
//         while (s1[j] != '\0')
//         {
//             count = 0;
//             if (s1[j] == ' ')
//             {
//                 printf("%c\n", s1[j]);
//                 count++;
//             }
//             // printf("%c\n",s1[j]);
//             j++;
//         }
//         count++;
//         printf("The number of intiger is %d\n", count);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int num, i = 0, j = 0, count = 0;
//     int arr[100];
//     char temp;
//     scanf("%d", &num);
//     do
//     {
//         scanf("%d%c", &arr[i], &temp);
//         i++;
//     } while (temp != '\n' && i != num);

//     for (j = 0; j < i; j++)
//     {

//         if (arr[j] < 0)
//         {
//             count++;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int i, n, m, count = 0;
//     scanf("%d", &n);
//     for (i = 0; i <= n; i++)
//     {
//         scanf("%d", &m);
//         if (m < 0)
//         {
//             count++;
//         }
//     }
//     printf("%d", count);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int test;
//     float num1, num2, sum = 0, multi;
//     scanf("%d", &test);
//     for (int i = 1; i <= test; i++)
//     {
//         scanf("%f%f", &num1, &num2);
//         multi = num1 * num2;
//         sum = sum + multi;
//     }
//     printf("%.3f", sum);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int X, Y, N;
//     scanf("%d %d %d", &X, &Y, &N);
//     for (int i = 1; i <= N; i++)
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
// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a > b && a > c)
//     {
//         printf("%d", b + c);
//     }
//     else if (b > a && b > c)
//     {
//         printf("%d", a + c);
//     }
//     else if (c > a && c > b)
//     {
//         printf("%d", a + b);
//     }
//     else if (a == b && b == c)
//     {
//         printf("%d", a + b);
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x < 1200)
    {
        printf("ABC");
    }
    else
        printf("ARC");

    return 0;
}