#include <stdio.h>
int main(){
int num ,sum=0;
printf("Enter the last intiger of the series:\n");
// scanf("%d",&num);
num=40;
printf("1+2+3+ ... ...+ %d = ",num);

for (int i = 1; i <=num; i++)
{
    sum=sum+i;
}

printf("%d",sum);

return 0;
}