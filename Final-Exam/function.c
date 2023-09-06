// #include <stdio.h>
// void partern(int row)
// {
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

// }
// int main()
// {
//     int row;
//     printf("Enter rows:\n");
//     scanf("%d", &row);
//     partern(row);

//     return 0;
// }
// #include <stdio.h>
// int num(char a){
//     if (a>=0||a<=9)
//     {

//         printf("This a digit");
//          return 1;
//     }

// }
// int main(){
// char char1;
// printf("Enter a Charecter\n");
// scanf("%c",&char1);
// num(char1);

// return 0;
// }
// #include <stdio.h>
// void f1(char s1[]){
//     int i=0;
//     while (s1[i]!='\0')
//     {
//         printf("%c \n",s1[i]);
//         i++;
//     }

// }
// int main(){
// char s1[]="shahin chowdhury";
// f1(s1);
// return 0;
// }
// #include <stdio.h>
// void f1(int ara[])
// {
//     int max = ara[0];
//     for (int i = 1; i <= 3; i++)
//     {
//         if (max < ara[i])
//         {
//             max = ara[i];
//         }
//     }
//     printf("Maximum number is:%d", max);
// }
// int main()
// {
//     int ara[] = {10, 20, 30, 40};
//     f1(ara);
//     return 0;
// }