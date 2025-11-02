/*
Implement a C program to insert an element at the front, middle, or end 
of an array, and print the array before and after insertion.
*/
#include<stdio.h>
int main() {
    int arr[20] = {10, 23, 45, 52, 67, 98, 19, 61, 79, 39};
    int choice, position, element, n = 10, i ;
    printf("Array before insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n array insertion ? \n1 - Front\n2 - Middle\n3 - End\n");
    scanf("%d", &choice);
    printf("\nEnter the element to insert: ");
    scanf("%d", &element);
    if (choice == 1) {
        position = 0; 
    } else if (choice == 2) {
        position = n / 2; 
    } else if (choice == 3) {
        position = n; 
    } else {
        printf("\nInvalid input!");
        return 0;
    }
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
