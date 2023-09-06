
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char ch, cha, s1[101];
//     int t, k, j = 0, count = 0;
//     scanf("%d", &t);
//     for (int i = 1; i <= t; i++)
//     {
//         count = 0;
//         scanf("%s", &s1);
//         int end = strlen(s1);

//         for (int j = 0; j <= end; j++)
//         {
//             ch = s1[j];
//             if (ch >= 'a' && ch <= 'z')
//             {
//                 for (int k = 0; k <= end; k++)
//                 {
//                     if (s1[j] == s1[k])
//                     {
//                         count++;
//                     }
//                 }
//             }

//         }
//         if (count == 0)
//         {
//             printf("NO\n");
//         }
//         else if (count % 2 == 0)
//         {
//             printf("YES\n");
//         }
//         else
//             printf("NO\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[101], s2[52], s3[52];
//     scanf("%s",&s1);
//     int len = strlen(s1);
//     // printf("%d", len);

//     for (int i = 0; i<len/2; i++)
//     {
//         s2[i] = s1[i];

//         if (i = len / 2)
//         {
//             s2[i] = '\0';
//         }
//     }
//     for (int k = 0, j = len / 2; j < len; j++, k++)
//     {
//         s3[k] = s1[j];
//     }
//     int comp = strcmp(s2, s3);
//     if (comp == 0)
//     {
//         printf("same\n");
//     }
//     else
//         printf("NOt\n");
//     printf("%s\n", s2);
//     printf("%s\n", s3);
//     return 0;
//     if (len % 2 != 0)
//     {
//         printf("NO\n");
//     }
// }
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char s1[100];
//     char ch;
//     char s2[100];
//     char s3[100];
//     int i = 0, lenth, len, t;
//     scanf("%d", &t);
//     for (int g = 1; g <= t; g++)
//     {
//         scanf("\n");
//         gets(s1);

//         lenth = strlen(s1);
//         len = lenth / 2;
//         if (lenth % 2 == 0)
//         {
//             i == 0;
//             while ((ch = s1[i]) != '\0' && i < len)
//             {

//                 s2[i] = ch;
//                 i++;

//                 if (i == len)
//                 {
//                     s2[i] = '\0';
//                 }
//             }

//             for (int k = 0, j = len; j < lenth; j++, k++)
//             {
//                 s3[k] = s1[j];
//             }
//             int r = strcmp(s2, s3);

//             if (r == 0)
//             {
//                 printf("YES\n");
//             }

//             else
//                 printf("NO\n");
//         }

//         else
//             printf("NO\n");
//     }

//     return 0;
// }
// A string is called square if it is some string written twice in a row.
//  For example, the strings "aa", "abcabc", "abab" and "baabaa" are square.
//  But the strings "aaa", "abaaab" and "abcdabc" are not square.
// For a given string ss determine if it is square.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[1001];
//     int t, lenth, len, count = 0;
//     scanf("%d", &t);
//     for (int i = 1; i <= t; i++)
//     {
//         count = 0;
//         scanf("\n");
//         scanf("%[^\n]%*c", s1);

//         lenth = strlen(s1);
//         len = lenth / 2;
//         if (lenth % 2 == 0)
//         {

//             for (int i = 0; i < lenth; i++)
//             {
//                 if (s1[i] == s1[len + i])
//                 {
//                     count++;
//                 }
//             }
//             if (count == len)
//             {
//                 printf("YES\n");
//             }
//             else if (count < len)
//             {
//                 printf("NO\n");
//             }
//         }

//         else   printf("NO\n");
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n, p, q, count = 0;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d %d", &p, &q);
//         int sub = q - p;
//         if (sub >= 2)
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
//     int s, t, x;
//     scanf("%d %d %d", &s, &t, &x);
//     if (s < t)
//     {

//         if (x >= s && x < t)
//         {
//             printf("Yes\n");
//         }
//         else
//             printf("No\n");
//     }
//     if (s > t)
//     {
//         if (s <= x && x <= 24 || x >= 0 && x < t)
//         {
//             printf("Yes");
//         }
//         else
//             printf("No");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n, dd, aa;
//     aa = 0;
//     dd = 0;

//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         char ch;
//         scanf(" %c", &ch);

//         if (ch == 'D')
//         {
//             dd++;
//         }
//         else if (ch == 'A')
//         {
//             aa++;
//         }
//     }
//     if (dd > aa)
//     {
//         printf("Danik\n");
//     }
//     if (aa > dd)
//     {
//         printf("Anton\n");
//     }
//      if (aa == dd)
//     {
//         printf("Friendship\n");
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if (b > a)
//     {
//         int num = b - a + 1;
//         printf("%d", num);
//     }

//     else
//         printf("%d", 0);

//     return 0;
// }