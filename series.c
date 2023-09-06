/*1+2+3+... +n=sum*/
// #include <stdio.h>
// int main(){
// int num ,sum=0;
// printf("Enter the last intiger of the series:\n");
// scanf("%d",&num);
// printf("1+2+3+ ... ...+ %d = ",num);

// for (int i = 1; i <=num; i++)
// {
//     sum=sum+i;
// }

// printf("%d",sum);

// return 0;
// }
/*
1*2+2*3+3*4+... ...+n1*n2=sum
*/
// #include <stdio.h>
// int main()
// {
//     int num1, num2, sum;
//     sum = 0;
//     printf("Enter last two number accordingly\n");
//     scanf("%d %d", &num1, &num2);
//     for (int i = 1, j = 2; i <= num1 && j <= num2; i++, j += 1)
//     {
//         sum = sum + i * j;
//     }

//     printf("1*2+ 2*3+ 3*4+ ... ...+%d *%d = %d", num1, num2, sum);

//     return 0;
// }
// #include <stdio.h>
// int main(){
// int first=0,second=1,count=0,fibo,num;
// printf("Enter range : ");
// scanf("%d",&num);
// while (count<num)
// {
//     if (count<=1)
//     {
//         fibo=count;
//     }
//     else 
//     {
//         fibo =first +second;
//         first =second;
//         second=fibo;

//     }
//     printf("%d ",fibo);
//     count++;
// }



// return 0;
// }

// #include <stdio.h>
// int main(){
// int num,sum;
// printf("Enter last number of the series");
// scanf("%d",&num);
// for (int i = 0; i <=num; i++)
// {
//     if (i%2!=0)
//     {
//         sum=sum+i;
//     }
    
// }

// printf("%d",sum);



// return 0;
// }
#include <stdio.h>
int main(){
double celsius,farenheite;
printf("Enter the tempreture in Farenheite\n");
scanf("%lf",&farenheite);
celsius=(farenheite-32)*1.8;
printf("%lf",celsius);




return 0;
}