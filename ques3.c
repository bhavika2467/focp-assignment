#include <stdio.h>
int main()  {
    int x, y;
    printf("Enter 1st num: ");
    scanf("%d", &x);
    printf("Enter 2nd num : ");
    scanf("%d", &y);
    int diff = x+(~y+1);
    printf(" difference of two num is : %d", diff);
    return 0;
}

