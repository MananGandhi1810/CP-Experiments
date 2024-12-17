#include <stdio.h>

void reverse(int arr[])
{
    int i, j, temp;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
}

int main()
{
    int arr[10] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(arr);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}