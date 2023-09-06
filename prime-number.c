// #include <stdio.h>
// int main()
// {
//     // in a definite range
//     int num, range, i, count;
//     printf("Enter a positive number: ");
//     scanf("%d", &range);
//     for (num = 2; num <= range; num++)
//     {
//         count = 0;
//         for (i = 2; i < num; i++)
//         {
//             if (num % i == 0)
//             {
//                 count++;
//                 break;
//             }

//         }
//         if (count == 0)
//         {
//             printf("%d\n", num);
//         }
//     }

//     return 0;
// }

// single number check
// #include <stdio.h>
// int main()
// {

//     int num, i, count = 0;
//     printf("Enter a positive number \n");
//     scanf("%d", &num);
//     if (num == 0 || num == 1)
//     {
//         count = 1;
//     }

//     for (i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             count = 1;
//             break;
//         }
//     }
//     if (count == 0)
//     {
//         printf("%d is a prime number", num);
//     }
//     else
//         printf("%d is not prime number ", num);
//     return 0;
// }
 
