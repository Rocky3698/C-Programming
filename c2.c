
#include <stdio.h>

void findMissing(int arr[], int N)
{
    int temp[N + 1];
    for (int i = 0; i <= N; i++)
    {
        temp[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        temp[arr[i] - 1] = 1;
    }
//testing line, not useful
    int ans;
    for (int i = 0; i <= N; i++)
    {
        if (temp[i] == 0)
            ans = i + 1;
    }
    printf("%d", ans);
}

int main()
{
    int arr[100];
    int nm;
    scanf("%d", &nm);
    for (int i = 0; i < nm - 1; i++)
    {
        scanf("%d", &arr[i]);
        if (i == nm - 1)
        {
            arr[nm - 2] = '\0';
        }
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    findMissing(arr, n);
}