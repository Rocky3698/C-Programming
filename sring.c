// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     /*string input or output*/
// char s1[30];
// printf("Enter your full name\n");
// gets(s1);
// printf("Your full name is %s\n",s1);

/*string print char wise*/

// char s1[]="Rocky Chowdhury";
// int i=0;
// while (s1[i]!='\0')
// {
//     printf("%c\n",s1[i]);
//     i++;
// }
/* string lenth*/
// char s1[]="Rocky Chowdhury";
// int len =strlen(s1);
// printf("%d",len);

// char s1[]="Shahin Chowdhury Rocky";
// int i=0,len=0;
// while (s1[i]!='\0')

// {
//     i++;
//     len++;
// }
// printf("Length = %d",len);
/*string copy*/
// char source[]="Rocky Chowdhury";
// char target[20];
// strcpy(target,source);
// printf("Source String = %s\n",source);
// printf("Target Strimg = %s\n",target);

/*connet string*/
// char s1[]="My Name Is ";
// char s2[]="Rocky Chowdhury";
// strcat(s1,s2);
// printf("%s",s1);
// int i=0,l=0,j=0;
// while (s1[i]!='\0')
// {
//     i++;
//     l++;
// }
// while (s2[j]!='\0')
// {
//     s1[l+j]=s2[j];
//     j++;
// }
// printf("%s\n",s1);
/*string compair*/
// char s1[]="Rocky Chowdhury";
// char s2[]="Shahin Chowdhury";
// int i = strcmp(s1,s2);
// if (i==0)
// {
//     printf("Strings are equal");

// }

// else printf("Strings are not equal");

/*string reverse*/
// char s1[]="Shahin Chowdhury";
// strrev(s1);
// printf("%s\n",s1);
/*palindrom string check*/
// char s1[30];
// char s2[30];
// int i;
// printf("Enter the string\t");
// gets(s1);
// strcpy(s2, s1);
// strrev(s2);
// i = strcmp(s1, s2);
// if (i == 0)
// {
//     printf("%s is palindrom.\n", s1);
// }
// else
// {
//     printf("%s is not palindrom", s1);
// }
/*string swapping*/
// char s1[]="Rocky Chowdhury";
// char s2[]="Shahin chowdhury";
// char s3[20];
// strcpy(s3,s1);
// strcpy(s1,s2);
// strcpy(s2,s3);
// printf("%s\n%s",s1,s2);
/*upper & lower case convertion*/
// char s1[30]="rocky chowdhury";
// strupr(s1);
// printf("%s\n",s1);
// strlwr(s1);
// printf("%s\n",s1);
/*find out number of vowel consonent word digit other */

//     char s1[100], ch;
//     int i, vowel, consonant, digit, word, other;
//     printf("Enter a string\n");
//     gets(s1);
//     i = vowel = consonant = digit = word = other = 0;
//     while ((ch = s1[i]) != '\0')
//     {
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//         {
//             vowel++;
//         }
//         else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//         {
//             consonant++;
//         }
//         else if (ch >= '0' && ch <= '9')
//         {
//             digit++;
//         }
//         else if (ch == ' ')

//         {
//             word++;
//         }
//         else
//             other++;

//         i++;
//     }

//     word++;

//     printf("Amount of number:%d\n", digit);
//     printf("Amount of vowel:%d\n", vowel);
//     printf("Amount of consonant:%d\n", consonant);
//     printf("Amount of word:%d\n", word);
//     printf("Amount of other:%d\n", other);

//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main(void){
char var1[20]="First one";
char var2[]="Second two";
strncpy(var2,var1,2);
printf(var2);
return 0;
}