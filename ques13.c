/*
Array:  [1, 3, 4, 3, 5, 6, 2]
Here:
4 is greater than both 3 (left) and 3 (right) →  peak
6 is greater than both 5 (left) and 2 (right) →  peak
So there are two peaks: 4 and 6.
*/
#include <stdio.h>
int main()
{
    int n = 0;
    int arr[10] = {1, 11, 22, 14, 64, 99, 73, 32, 98, 70};
    int max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            n = i + 1;
        }
    }
    printf("The peak element is %d at index %d", max, n);
    return 0;
}