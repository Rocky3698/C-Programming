// #include <stdio.h>
// int main(){
// int num,count=0;
// printf("ENter a number \n");
// scanf("%d",&num);
// if (num==0||num==1)
// {
//     count=1;
// }
// for (int i = 2; i < num; i++)
// {
//     if (num%i==0)
//     {
//         count=1;
//     }

// }
// if (count==0)
// {
//     printf("%d is Prime number",num);

// }

// else
// printf("%d is not prime number",num);

// return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int i, j, rows;
//     scanf("%d", &rows);
// for(i=1;i<=rows;i++)
//     {
//         for(j=i;j<rows;j++)
//             {
//                 printf(" ");
//             }
//         for(j=1;j<=(2*i - 1);j++)
//             {
//                 printf("*");
//             }
//         printf("\n");
//     }
//     for(i=1;i<=rows;i++)
//     {
//         for(j=1;j<=i;j++)
//             {
//                 printf(" ");
//             }
//         for(j=3;j<=(rows*2 - (2*i - 1));j++)
//             {
//                 printf("*");
//             }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i = 5;
    printf("%d %d %d %d", ++i, i++, ++i, i++);

    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int x;
//     x = 5 < 8 ? 1 != 2 < 5 == 0 ? 10 : 20 : 30;
//     printf("Value of x is %d", x);

//     return 0;
// }

// lcm o gcd 
#include <stdio.h>
int main(){
int num1 ,num2,rim;
printf("ENter Big number first then enter second number:\n");
scanf("%d %d",&num1,&num2);
int n1=num1;
int n2=num2;
while (n2!=0)
{
    rim=n1%n2;
    n1=n2;
    n2=rim;
}
int gcd=n1;
int lcm=(num1*num2)/gcd;
printf("%d\n",gcd);
printf("%d",lcm);

return 0;
}