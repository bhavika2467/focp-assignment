/* Develop a program to identify and print duplicate elements in an  array, or print 
 “-1” if no duplicates exist, applying frequency detection and data validation.
Examples:
Input: {2, 10,10, 100, 2, 10, 11,2,11,2}
Output: 2 10 11
*/
#include <stdio.h>
int main() {
    int arr[10] = {2, 10, 10, 100, 2, 10, 11, 2, 11, 2};
    int i, j, count;
    int found = 0; // flag to track if duplicates exist
    printf("Input array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
  }
    printf("\nDuplicate elements:\n");
    // Loop to find duplicates
    for (i = 0; i < 10; i++) {
        count = 1;
        if (arr[i] != -1) {  // if not already marked
            for (j = i + 1; j < 10; j++) {  // FIXED: use correct size
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // mark duplicate so it isn't counted again
    }
     }
         if (count > 1) {
     printf("%d ", arr[i]);
       found = 1; // mark that we found at least one duplicate
            }
      }
    }
    // If no duplicates found
    if (!found) {
        printf("-1");
    }
    return 0;
}