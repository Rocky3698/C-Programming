// #include <stdio.h>
// int main(){
// int num,temp;
// printf("Enter a number\n");
// scanf("%d",&num);
// temp=num;
// int num1=temp/2;
// temp=temp-1;
// int num2 =temp/2;
// if (num1==num2)
// {
//    printf("%d is a odd number",num);
// }
// else
// printf("%d is even number",num);

// return 0;
// }

// #include <stdio.h>
// int main(){
// int ara[5] = {50,60,70,80,90};
// printf("value of array : %d,%d,%d,%d,%d\n",ara[0],ara[1],ara[2],ara[3],ara[4]);
// printf("Address of ara[0] is %p\n",ara[0]);
// printf("Address of ara[1] is %p\n",ara[1]);
// printf("Address of ara[2] is %p\n",ara[2]);
// printf("Address of ara[3] is %p\n",ara[3]);
// printf("Address of ara[4] is %p\n",ara[4]);
// printf("Address of ara is %p\n",ara);

// return 0;
// }
// #include <stdio.h>
// int main(){
// for (int i = 33; i <=126; i++)
// {
//     // printf("ASCII code for %c is %d \n",i,i);
// }
// int code='a'-32;
// printf("%c",code);

// return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// void update(int *a, int *b)
// {
// int sum,sub;
//     sum = (*a) + (*b);
//     sub = abs((*a) - (*b));
//     *a=sum;
//     *b=sub;
// }

// int main()
// {
//     int a, b;
//     int *pa = &a, *pb = &b;

//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[1001];
//     int count = 0;
//     scanf("%s", s1);
//     for (char i = 48; i <= 57; i++)
//     {
//         count = 0;
//         for (int j = 0; j <= strlen(s1); j++)
//         {
//             if (s1[j] == i)
//             {
//                 count++;
//             }
//         }
//         printf("%d ", count);
//     }

//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// // 222
// // 212
// // 222
// int main()
// {

//     int n, n1;
//     scanf("%d", &n);
//     n1 = n;
//     for (int i = 1; i < n * 2; i++)
//     {
//         for (int j = 1; j < n * 2; j++)
//         {
//             if (j == 1 || i == 1 || j == (n * 2) - 1 || i == (n * 2) - 1)
//             {
//                 printf("%d ", n1);
//             }
//             else if (j == 2 || i == 2 || j == (n * 2) - 2 || i == (n * 2) - 2)
//             {

//                 printf("%d ", n - 1);
//             }

//             // printf("%d ",n1);
//         }

//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int sum1(int x, int y)
{
    int sum = x + y + 1;
    printf("Functional Sum is %d\n", sum);
}
int main()
{
    int a, b, sum;
    printf("Enter two intiger\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum is %d\n", sum);
    sum1(a, b);
    return 0;
}