#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
// testing
    if (size % 2 == 0)
        printf("%d %d\n", arr[(size / 2) - 1], arr[(size / 2)]);
    else
        printf("%d\n", arr[((size + 1) / 2) - 1]);
}