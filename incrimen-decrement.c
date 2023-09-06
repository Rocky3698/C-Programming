// #include <stdio.h>
// int x = 10;
// int main()
// {
//     printf("%d\n", x++); // 10
//     printf("%d\n", x);   // 11
//     printf("%d\n", ++x); // 12
//     printf("%d\n", x);   // 12
//     printf("%d\n", x--); // 12
//     printf("%d\n", --x); // 10

//     return 0;
// }
#include <stdio.h>
int main()
{
    int i = 5;
    printf("%d %d %d %d", ++i, i++, ++i, i++);

    return 0;
}