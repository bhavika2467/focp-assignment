/* // question -2 
    #include <stdio.h>
int main() {
    int a, b, hcf;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
 if (a == 0)
        hcf = b;
    else if (b == 0)
        hcf = a;
    else {
        // Loop until both numbers are equal
        while (a != b) {
            if (a > b)
                a = a - b;
            else
                b = b - a;}
        hcf = a;  // or b, both are same now
    }
    printf("HCF = %d", hcf);
    return 0;}
    // using recursive method 
    #include <stdio.h>

int hcf(int a, int b) {
    if (b == 0)
        return a;              // base case
    return hcf(b, a % b);      // recursive call
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("HCF = %d", hcf(a, b));
    return 0;
}
*/

#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    // Initialize hcf to 1
    hcf = 1;

    // Find the smaller of a and b
    int min;
    if (a < b)
        min = a;
    else
        min = b;

    // Find HCF using loop
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
