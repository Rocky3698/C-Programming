// #include <stdio.h>
// int main()
// {

//     int num, temp, sum, rim;
//     sum = 0;

//     printf("Enter a number to check ARMSTRONG\n");
//     scanf("%d", &num);
//     temp = num;
//     while (temp != 0)
//     {
//         rim = temp % 10;
//         sum = sum + rim * rim * rim;
//         temp = temp / 10;
//     }
//     if (sum == num)
//     {
//         printf("%d is a Armstrong number\n", num);
//     }
//     else
//         printf("%d is not Armstrong number\n", num);

//     return 0;
// }

/* Armstrong number below 100*/
#include <stdio.h>
int main()
{
    int initial, final, temp, rim, sum;
    sum = 0;
    printf("Enter initial value or final value to check armstrong numbers");
    scanf("%d %d", &initial, &final);
    for (int i=initial; i <= final; i++)
    {
        temp=i;
        while (temp != 0)
        {
            rim = temp % 10;
            sum = sum + rim * rim * rim;
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf("%d ,", i);
        }
        sum=0;
    }
    
    return 0;
}