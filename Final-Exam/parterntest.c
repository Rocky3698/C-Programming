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
//       printf("g");
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

// #include <stdio.h>
// int main(){
// char array[100];
// printf("Enter a String:\n");
// scanf("%s",array);
// printf("Your String is %d\n",array);

// return 0;
// }
// #include <stdio.h>
// int main(){
// char o='+';
// int n1=8;
// int n2=7;
// int result = (o=='+')?(n1+n2):(n1-n2);
// printf("%d",result);
// return 0;
// }
#include <stdio.h>
int main()
{
    int m = 0;
    for (int i = 1; i <= 5; i++)
    {
        m = 0;
        for (int j = 1; j <= 10; j++)
        {
            m = m + i;
            printf("%d * %d = %d\n", i, j, m);
        }
    }

    return 0;
}