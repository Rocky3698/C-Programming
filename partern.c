// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("Enter 0 for triangel star partern \nEnter 1 for reversed tryangel star partern\n");
//     scanf("%d", &a);
//     switch (a)
//     {
//     case 0:
//         printf("How many line you want to print");
//         scanf("%d", &b);
//         for (int i = 1; i <= b; i++)
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 printf("*");
//             }
//             printf("\n");
//         }

//         break;
//     case 1:
//         printf("you entert 1");
//         break;
//     default:
//         printf("Sorry you can't enter %d. Please Enter only 0 or 1", a);
//         break;
//     }

//     return 0;
// }
/*
 *
 **
 ***
 ****
 *****
 */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows you want to print\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
*****
*****
*****
*****
*****
*/
// #include <stdio.h>
// int main()
// {
//     int rows;
//     printf("Enter rows you want to print\t");
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= rows; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*
    *
   ***
  *****
 *******
*********
 */
// #include <stdio.h>
// int main()
// {
//     int rows, i, j;
//     printf("Enter rows you want to print");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for ( j = i; j < rows; j++)
//         {
//             printf(" ");
//         }
//         for ( j = 1; j <=(i*2-1); j++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }
//     return 0;
// }
/*
*********
 *******
  *****
   ***
    *
*/

// #include <stdio.h>
// int main()
// {
//     int rows, i, j;
//     printf("Enter roes you want to print");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j < i; j++)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= (rows * 2 - (i * 2 - 1)); j++)
//         {
//             printf("*");
//         }
      
//       printf("\n");
//     }
//     return 0;
// }
/*
1
12
123
1234
*/
// #include <stdio.h>
// int main()
// {
//    int rows;
//    printf("Enter rows you want to print");
//    scanf("%d", &rows);
//    for (int i = 1; i <= rows; i++)
//    {
//       for (int j = 1; j <= i; j++)
//       {
//          printf("%d", j);
//       }
//       printf("\n");
//    }

//    return 0;
// }
/*
A
BB
CCC
DDDD
*/
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     char input, alphabet = 'A';
//     printf("Enter last charecter you want to print\n");
//     scanf("%c", &input);
//     for (i = 1; i <= (input - 'A' + 1); ++i)
//     {
//         for (j = 1; j <= i; ++j)
//         {
//             printf("%c", alphabet);

//         }
//           ++alphabet;
//         printf("\n");

//     }

//     return 0;
// }

/*
 *
 **
 ***
 ****
 *****
 ****
 ***
 **
 *
 */
// #include <stdio.h>
// int main()
// {
//     int rows;
//     printf("Enter coloum you want to print\t");
//     scanf("%d", &rows);
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <=i ; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     for (int i = 1; i < rows; i++)
//     {
//         for (int j = 1; j <= rows-i; j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }

//     return 0;
// }
/*
 *
 **
 ***
 ****
 *****
 ****
 ***
 **
 *
 */
// #include <stdio.h>
// int main()
// {
//     int coloum, input;
//     printf("Enter colums you want to print\t");
//     scanf("%d", &input);
//     coloum=1;
//     for (int i = 1; i < (input * 2); i++)
//     {
//         for (int j = 1; j <= coloum; j++)
//         {
//             printf("%d",j);
//         }
//         if (i < input)
//         {
//             coloum++;
//         }
//         else
//         {
//             coloum--;
//         }
//         printf("\n");
//     }

//     return 0;
// }
/*
    *
   ***
  *****
   ***
    *
       */

// #include <stdio.h>  
  
// int main(void) {  
//   int n;  
//   printf("Enter the number of rows\n");  
//   scanf("%d",&n);  
//   int spaces=n-1;  
//   int stars=1;  
//   for(int i=1;i<=n;i++)  
//   {  
//     for(int j=1;j<=spaces;j++)  
//     {  
//       printf(" ");  
//     }  
//     for(int k=1;k<=stars;k++)  
//     {  
//       printf("*");  
//     }  
//     if(spaces>i)  
//     {  
//       spaces=spaces-1;  
//       stars=stars+2;  
//     }  
//     if(spaces<i)  
//     {  
//       spaces=spaces+1;  
//       stars=stars-2;  
//     }  
//     printf("\n");  
//   }  
//   return 0;}  

/*
*****
*   *
*   *
*   *
*****
*/
#include <stdio.h>
int main(){
    int rows;
    printf("Enter rows\t");
    scanf("%d",&rows);
for (int i = 1; i <=rows; i++)
{
    for (int j = 1; j <=rows; j++)
    {
        if (i==1||i==rows||j==1||j==rows)
        {
            printf("*");
        }
        else{printf(" ");}
    }
    printf("\n");
}
return 0;

}
/*
*****
** **
* * *
** **
*****
*/
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == 1 || i == n || j == 1 || j == n - i + 1 || i == j || j == n)
//             {
//                 printf("*");
//             }
//             else
//             {

//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }
/*
    *****
   *****
  *****
 *****
*****
*/
// #include <stdio.h>
// int main()
// {
//     int r;
//     printf("Enter the number of rows");
//     scanf("%d", &r);
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= r - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <=r ; k++)
//         {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }
/*
    *****
   *   *
  *   *
 *   *
*****
*/
// #include <stdio.h>
// int main()
// {
//     int r;
//     printf("Enter the number of rows");
//     scanf("%d", &r);
//     for (int i = 1; i <= r; i++)
//     {
//         for (int k = 1; k <=r-i; k++)
//         {
//             printf(" ");
//         }
        
//        for (int j = 1; j <=r; j++)
//        {
//         if (i==1||i==r||j==1||j==r)
//         {
//             printf("*");
//         }
//         else
//         printf(" ");
//        }
       

//         printf("\n");
//     }

//     return 0;
// }
/*
******
 ******
  ******
   ******
    ******
*/
// #include <stdio.h>
// int main()
// {
//     int r;
//     printf("Enter the number of rows");
//     scanf("%d", &r);
//     for (int i = 1; i <= r; i++)
//     {
//        for (int j = 1; j < i; j++)
//        {
//         printf(" ");
//        }
//        for (int k = 0; k <=r; k++)
//        {
//         printf("*");
//        }
       
//         printf("\n");
//     }

//     return 0;
// }
/*
*****
 *   *
  *   *
   *   *
    *****
*/
// #include <stdio.h>
// int main()
// {
//     int r;
//     printf("Enter the number of rows");
//     scanf("%d", &r);
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j < i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= r; k++)
//         {
//             if (i == 1 || i == r || k == 1 || k == r)
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }

//         printf("\n");
//     }

//     return 0;
// }
/*
*
**
* *
*  *
*****
*/
// #include <stdio.h>
// int main()
// {
//     int r;
//     printf("Enter the number of rows");
//     scanf("%d", &r);
//     for (int i = 1; i <= r; i++)
//     {

//         for (int k = 1; k <= i; k++)
//         {
//             if (i == k || k == 1 || i == r)
//             {
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }

//         printf("\n");
//     }

//     return 0;
// }