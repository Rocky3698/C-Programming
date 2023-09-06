// #include <stdio.h>
// int main()
// {

//     int num, temp, i, r, sum = 0, rev = 0;
//     printf("Enter a positive number");
//     scanf("%d", &num);
//     temp = num;
//     while (temp != 0)
//     {
//         r = temp % 10;
//         printf("%d\n", r);
//         sum = sum + r;
//         rev = rev * 10 + r;
//         temp = temp / 10;
//     }
//     printf("Reverse number of %d is =%d\n", num, rev);
//     printf("%d\n", sum);
//     printf("Rocky chowdhury\n");
//     return 0;
//     getchar;
// }
#include<stdio.h>
int main(){
int i, n;
float div;
float temp = 1;
float sum = 0;
printf("enter range");
scanf("%d", &n);

for(i=1;i<=n;i++){
    temp = temp*i;
    div = i/temp;
    sum += div;
}
printf("%.2f",sum);



return 0;

}