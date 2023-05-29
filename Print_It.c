#include <stdio.h>
#include <string.h>
int is_palindrome(char str[])
{
    int size = strlen(str);
    int temp = size;
    int flag = 1;
    for (int i = 0; i < size/2; i++)
    {
        if (str[i] != str[temp])
        {
            flag = 0;
            break;
        }
        else
            temp--;
    }
    if (flag)
    {
        return flag;
    }
    else
        return flag;
}
int main()
{
    char str[11];
    fgets(str, sizeof(str), stdin);
    int func_value = is_palindrome(str);
    if (func_value)
        printf("Palindrome");

    else
        printf("Not Palindrome");
}