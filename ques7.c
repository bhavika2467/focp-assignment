#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        int val = 0;
        for (int j = 1; j <= i; j++) {
            printf("%d", val);
            val = 1 - val;
        }
        int spaces = 2 * (5 - i);
        for (int s = 1; s <= spaces; s++) {
            printf(" ");
        }
        val = 0;
        for (int j = 1; j <= i; j++) {
            printf("%d", val);
            val = 1 - val;
        }
        printf("\n");
    }
    return 0;
}
