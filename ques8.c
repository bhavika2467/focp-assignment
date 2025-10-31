#include <stdio.h>
int main() {
    int n, i;
    int a = 0, b = 1, c;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    printf("\nFibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
