/*Design a C program to find the first occurrence of the score “99” in an array,
 focusing on linear search and data retrieval techniques. */

#include<stdio.h>
int main () {
    int score[10] = {94,99,23,56,78,87,99,65,57,26} ;
     int x = 99, found ;
    for(int i =0;i<10;i++) {
        if (x==score[i]) {
               printf("Index: %d\n", i);        
            printf(" Position: %d\n", i + 1); 
            found = 1;
        
        }
    }
      if (found == 0) {
        printf("Score 99 not found in the list.\n");
    }

    return 0;
}

