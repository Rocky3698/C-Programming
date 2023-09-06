#include <stdio.h>
int main()
{
    int num, temp, i, r, sum = 0, rev = 0;
    printf("Enter a positive intiger\t\n");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        printf("single digits are left to right:%d\n", r);
        sum = sum + r;
        rev = rev * 10 + r;
        temp = temp / 10;
    }
    printf("Reverse number is :%d\n", rev);
    printf("Sum of single digits is:%d\n", sum);
    if (rev == num)
    {
        printf("%d is a palindrom number\n", num);
    }
    else
        printf("%d is not palindrom number\n", num);

    return 0;
}