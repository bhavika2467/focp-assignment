#include<stdio.h>
int main() {
    int arr[10] = {91, 31, 23, 21, 13, 17, 19, 87, 88, 86};
    int i, j, count = 0;
    for (i = 0; i < 10; i++) {
        if (arr[i] <= 1)
            continue; 
         int flag = 0; 
        for (j = 2; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                flag = 1; 
                break;
          }
        }
        if (flag == 0) {
            printf("\n%d is a prime number\n", arr[i]);
            count++;
        } else {
            printf("\n%d is not a prime number\n", arr[i]);
        }
    }
    printf("\nTotal number of prime numbers = %d\n", count);
    return 0;
}
