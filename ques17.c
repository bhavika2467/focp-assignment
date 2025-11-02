/*
Design a C program to delete an element from the front, middle, or 
end of an array, and print the array before and after deletion
*/
#include <stdio.h>
int main() {
    int arr[10] = {12, 34, 56, 76, 85, 93, 4, 76, 89, 73};
    int i, choice, position, n = 10;
    printf("Array before deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n array deletion ? \n1 - Front\n2 - Middle\n3 - End\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        position = 0; 
    } 
    else if (choice == 2) {
        position = n / 2;   
    } 
    else if (choice == 3) {
        position = n - 1;  
    } 
    else {
    printf("Invalid input!\n");
    return 0;
    }
    for (i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("\nArray after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
